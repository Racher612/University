#include <iostream>

using namespace std;

class Number{
private:
    int * pnum;
public:
    Number(int Num):pnum(new int(Num)){
      cout<<"New Constructor"<<endl;
    }
    Number(const Number &R):pnum(new int(*R.pnum)){
      cout<<"New Constructor copy"<<endl;
    }
    Number():pnum(nullptr){}
    Number & operator=(const Number &R){
      if (pnum!=nullptr){
          delete pnum;
          cout<<"Free, ";
        }
      pnum=new int(*R.pnum);
      cout<<"New Operator= copy"<<endl;
      return *this;
    }
    ~Number(){
      if (pnum!=nullptr){
          delete pnum;
          cout<<"Free, ";
      }
      cout<<"Destructor"<<endl;
    }
    Number(Number && R){
      pnum=R.pnum;
      R.pnum=nullptr;
      cout<<"Constructor move"<<endl;
    }
    Number & operator=(Number&& R){
      if (pnum!=nullptr){
          delete pnum;
          cout<<"Free move, ";
        }
      pnum=R.pnum;
      R.pnum=nullptr;
      cout<<"Operator= move"<<endl;
      return *this;
    }

};
Number f(int a,int b)
{
  Number temp(a+b);
  return Number(move(temp));
}

int main()
{
  Number A(5);
  Number B(A);
  Number C(move(A));
  Number D(6);
  D=move(A);
  Number F=f(6,7);
  return 0;
}
