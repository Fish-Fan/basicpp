#include "iostream"
using namespace std;
int main() {

  int x = 100;
  //声明void类型指针
  //void指针可以指向任意类型，可以增加程序的通用性
  void *p = &x;
  cout<<"*p="<<*(int*)p<<endl;
  //声明普通类型指针
  int *q = NULL;
  //不同类型指针的初始化
  q = (int*)p;
  cout<<"*q="<<*q<<endl;


  return 0;
}
