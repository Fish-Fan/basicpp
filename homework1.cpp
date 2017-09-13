#include "iostream"
#include "vector"
using namespace std;
//指针形参
// int maxNum(int *a,int *b) {
//   int max = *b;
//   if(*a > *b) {
//     max = *a;
//   }
//   return max;
// }
//
// int minNum(int *a,int *b) {
//   int min = *b;
//   if(*a < *b) {
//     min= *a;
//   }
//   return min;
// }

//引用形参
int maxNum(int &a,int &b) {
  int max = b;
  if(a > b) {
    max = a;
  }
  return max;
}

int minNum(int &a,int &b) {
  int min = b;
  if(a < b) {
    min= a;
  }
  return min;
}


int main() {
  //声明数组
  std::vector<int> arr;
  int flag = 0;
  int n;


  std::cout << "--------程序开始-------" << '\n';
  std::cout << "请输入n的值" << '\n';
  std::cin >> n;


  //等待用户输入完毕
  do {

    int number;
    std::cout << "输入第" << flag+1 << "个数!" << '\n';
    std::cin >> number ;

    arr.push_back(number);
    flag++;

  } while(flag != n);
  //初始化最大最小变量
  int max = arr[0];
  int min = arr[0];
    //进行排序
    for(int i = 0;i < arr.size()-1;i++) {

      // max = maxNum(&max, &arr[i+1]);
      // min = minNum(&min, &arr[i+1]);
      max = maxNum(max, arr[i+1]);
      min = minNum(min, arr[i+1]);
    }
    //输出结果
    std::cout << "最大数为" << max << '\n';
    std::cout << "最小数为" << min << '\n';
    std::cout << "--------程序结束-------" << '\n';
  return 0;
}
