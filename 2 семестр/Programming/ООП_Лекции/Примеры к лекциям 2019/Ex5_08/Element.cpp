#include "Element.h"

TSpisok::~TSpisok()
    { puts("Delete TSpisok");
      while ((cur=Del())!=NULL)
       { cur->Print();
	     delete(cur);  }
    }
void TSpisok::Add(TElement *e)
    { if (first==NULL)
{ first=last=e;
	  e->suc=e->pre=NULL; }
      else
	{ e->suc=first;
	  first->pre=e;
	  e->pre=NULL;
	  first=e;  }
    }
TElement *TSpisok::Del(void)
    { TElement *temp;
      temp=last;
      if (last!=NULL)
	  { last=last->pre;
	    if (last!=NULL)last->suc=NULL;
	  }
      if (last==NULL) first=NULL;
      return temp;
    }
void TSpisok::ForEach(void (*f)(TElement *e))
{     cur=first;
      while (cur!=NULL)
	  { (*f)(cur);
	        cur=cur->suc;}}
