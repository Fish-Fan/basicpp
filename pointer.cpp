#include <iostream>
using namespace std;

int main() {
  int a = 100;
  //最基本的指针
  int *p1 = 0;
  p1 = &a;

  *p1 = 20;
  //常量指针(可以指向任意变量，但是不能通过指针来修改变量的值)
  const int *p2 = 0;
  const int b = 90;
  p2 = &b;

  //*p2 = 100;不可以通过指针来修改变量的值
  //也是常量指针，和const int *p3是一样的
  int const *p3 = 0;
  const int c = 30;
  int d = 40;

  p3 = &c;
  p3 = &d;
  //指针常量(指针一旦声明过后就不能再更改)
  int e = 1;

  int* const p4 = &e;
  //指向常量的常指针
  const int f = 2;
  const int* const p5 = &f;
  cout<<"the value of a is "<<*p1<<endl;
  cout<<"the address of const b is "<<p2<<endl;
  cout<<"the address of const d is "<<p3<<endl;
  cout<<"the value of d is "<<*p3<<endl;
  cout<<"the address of e is "<<p4<<endl;
  cout<<"the value of e is "<<*p4<<endl;
  cout<<"the address of f is "<<p5<<endl;
  cout<<"the value of f is "<<*p5<<endl;
  return 0;
}
