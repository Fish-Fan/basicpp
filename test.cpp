//
//  test.cpp
//
//
//  Created by mac on 2017/9/2.
//
//

#include <iostream>
using namespace std;

//后置函数要在main函数中声明后才能使用
int main() {
    int max(int a, int b);
    int a;
    int b;
    cout<<"Please input the first number:"<<endl;
    cin>>a;
    cout<<"Please input the second number:"<<endl;
    cin>>b;
    cout<<"In ("<<a<<","<<b<<"),the max number is "<<max(a,b)<<endl;
    return 0;
}

int max(int a, int b) {
  return a > b ? a : b;
}
