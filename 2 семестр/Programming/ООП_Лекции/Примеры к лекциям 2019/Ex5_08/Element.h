#include <stdio.h>

class TElement
{ 
public:
	  TElement *pre,*suc;
	  TElement() { pre=suc=NULL;}
	  virtual ~TElement() { puts("Delete TElement.");}
	  virtual void Print()=0; 
 };
class TSpisok  
{
private:
	 TElement *first,*last,*cur;
      public:
	 TSpisok() {first=last=cur=NULL;}
	 ~TSpisok();
	 void Add(TElement *e);   
	 TElement *Del();         
	 void ForEach(void (*f)(TElement *e));
	 TElement *First(){return cur=first;}
	 TElement *Next(){return cur=cur->suc;}
	 TElement *Last(){return cur=last;}
	 TElement *Previous(){return cur=cur->pre;}
};
