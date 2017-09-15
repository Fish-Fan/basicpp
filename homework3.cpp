#include "iostream"
#include "vector"
using namespace std;
typedef int array[4];
//引用形参
int maxFuntion(array &arr,int n) {
  int max = arr[0];
  for(int i = 0;i < n;i++) {
    max = max > arr[i] ? max : arr[i];
  }
  return max;
}

int minFunction(array &arr,int n) {
  int min = arr[0];
  for(int i = 0;i < n;i++) {
    min = min < arr[i] ? min : arr[i];
  }
  return min;
}

//指针形参
// int maxFuntion(int const *arr,int n) {
//   int max = arr[0];
//   for(int i = 0;i < n;i++) {
//     max = max > arr[i] ? max : arr[i];
//   }
//   return max;
// }
//
// int minFunction(int const *arr,int n) {
//   int min = arr[0];
//   for(int i = 0;i < n;i++) {
//     min = min < arr[i] ? min : arr[i];
//   }
//   return min;
// }


int main() {
  //声明数组


  std::cout << "--------程序开始-------" << '\n';
  int n = 3;
  int arr[3] = {2,4,1};
    //进行排序
    int max = maxFuntion(arr,n);
    int min = minFunction(arr,n);
    //输出结果
    std::cout << "最大数为" << max << '\n';
    std::cout << "最小数为" << min << '\n';
    std::cout << "--------程序结束-------" << '\n';
  return 0;
}
