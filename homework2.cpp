#include "iostream"
#include <string>
using namespace std;

void bubbleSort(int a[],int size)
{
     int temp;
     for(int pass=1;pass<size;pass++)
     {
        for(int k=0;k<size-pass;k++)
           if(a[k]>a[k+1])
           {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
           }
     }
}

void bubbleSort(float a[],int size)
{
     float temp;
     for(int pass=1;pass<size;pass++)
     {
        for(int k=0;k<size-pass;k++)
           if(a[k]>a[k+1])
           {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
           }
     }
}

void bubbleSort(char a[],int size)
{
     char temp;
     for(int pass=1;pass<size;pass++)
     {
        for(int k=0;k<size-pass;k++)
           if(a[k]>a[k+1])
           {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
           }
     }
}

void bubbleSort(string a[],int size)
{
     string temp;
     for(int pass=1;pass<size;pass++)
     {
        for(int k=0;k<size-pass;k++)
           if(a[k]>a[k+1])
           {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
           }
     }
}

int main() {
  int array[] = {1,45,2,34};
  // float array[] = {2.4,7.6,5.5,2.0};
  // char array[] = {'a','c','b','r'};
  // string array[] = {"hello","this","tom","alice"};
  bubbleSort(array,4);
  for(int i = 0;i < 4;i++){
            std::cout << array[i] << '\n';
        }
  return 0;
}
