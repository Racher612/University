#include "Element.h"

TElement::~TElement()
    { puts("Delete TElement.");
    }
TSpisok::~TSpisok()
    { puts("Delete TSpisok");
      while ((cur=Del())!=nullptr)
       { cur->Print();
	     delete(cur);  }
    }
void TSpisok::Add(TElement *e)
    { if (first==nullptr)
{ first=last=e;
          e->suc=e->pre=nullptr; }
      else
	{ e->suc=first;
	  first->pre=e;
	  e->pre=nullptr;
	  first=e;  }
    }
TElement *TSpisok::Del(void)
    { TElement *temp;
      temp=last;
      if (last!=nullptr)
	  { last=last->pre;
	    if (last!=nullptr)last->suc=nullptr;
	  }
      if (last==nullptr) first=nullptr;
      return temp;
    }
void TSpisok::ForEach(void (*f)(TElement *e))
{     cur=first;
      while (cur!=nullptr)
	  { (*f)(cur);
	        cur=cur->suc;}}
