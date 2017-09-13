#include "iostream"
using namespace std;

void swap(int &a,int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main() {
  //1.声明一个引用时，必须使之初始化,因为引用并不是一个独立的数据类型
  //2.引用与其代表的变量共享同一内存单元，在引用完成初始化之后不能对使之成为另外一个变量的引用\
  //3.不能建立数组的引用
  int x = 100;
  int &rx = x;
  cout<<"rx="<<rx<<endl;
  rx = 200;
  cout<<"x="<<x<<endl;

  cout<<"----------交换函数--------"<<endl;
  int a = 1;
  int b = 2;
  cout<<"交换前: a="<<a<<", b= "<<b<<endl;
  cout<<"after swap(a,b)"<<endl;
  swap(a,b);
  cout<<"交换后: a="<<a<<", b= "<<b<<endl;
  return 0;

}
