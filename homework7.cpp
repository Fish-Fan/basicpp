#include <iostream>
using namespace std;
class Student {
  public:
    Student(int);
    static int GetSum() {return sum;};
    static int sum;
  private:
    int score;


};

Student::Student(int score) {
  this->score = score;
  sum += score;
}

int Student::sum = 0;

int main() {
  Student student1(100);
  Student student2(200);
  std::cout << Student::GetSum() << '\n';
  return 0;
}
