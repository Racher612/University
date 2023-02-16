#include <iostream>
#include <memory>
using namespace std;

class Element{
  public:
     int num;
     shared_ptr <Element> p;
     Element(int Num)/*:p(nullptr)*/{
        num=Num; cout<<"Item created:"<<num<<endl;
      }
     ~Element(){
        cout<<"Item released:"<<num<<endl;
      }
};
int main() {
    int n;
    shared_ptr <Element> first; // будет создан
                                                                      // объект-указатель с nullptr
    weak_ptr <Element> q;

    cout << "Enter item:";
    cin >> n;
    if (n !=1000){
       first = make_shared<Element>(n);
       q=first;
      }
    cout << "Enter item:";
    cin >> n;
    while (n !=1000){
       q=(q.lock())->p=make_shared<Element>(n);
    cout << "Enter item:";
    cin >> n;
    }
    if (!first)
       cout<<"List is empty.";
    else {
      q=first;
      while(q.lock()){
         cout<<q.lock()->num<<endl;
         q=(q.lock())->p;
       }
     }
    return 0;
  }
