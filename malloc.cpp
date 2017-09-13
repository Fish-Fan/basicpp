#include "iostream"
using namespace std;
int main() {
  int *p = NULL;
  //通过new运算得到内存单元
  p = new int;
  cout<<"*p="<<*p<<endl;
  //delete释放内存单元
  delete p;
  p = NULL;
  return 0;
}
