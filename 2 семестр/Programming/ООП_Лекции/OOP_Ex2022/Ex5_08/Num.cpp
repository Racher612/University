#include "Num.h"

TNum::~TNum() {
  puts("Delete TNum.");
}
void TNum::Print() {
  printf("%d ",num);
}
TChar::~TChar() {
  puts("Delete TChar.");
}
void TChar::Print() {
  printf("%c ",ch);
}
void Show(TElement *e)
   { e->Print();}
