#include <iostream>
using namespace std;
class BBank;
class GBank;
class CBank {
  private:
    double balance;
  public:
    CBank(double balance) {
      this->balance = balance;
    }

    friend double Total(CBank &,BBank &,GBank &);

};

class BBank {
  public:
    BBank(double balance) {
      this->balance = balance;
    }
    friend double Total(CBank &,BBank &,GBank &);
  private:
    double balance;
};

class GBank {
  public:
    // GBank(double balance) {
    //   this->balance = balance;
    // }
    GBank(double);
    friend double Total(CBank &,BBank &,GBank &);

  private:
    double balance;
};

GBank::GBank(double balance) {
  this->balance = balance;
}
double Total(CBank &c,BBank &b,GBank &g) {
      return c.balance + b.balance + g.balance;
    }

int main() {
  CBank c(1000);
  BBank b(1000);
  GBank g(1000);

  std::cout << Total(c,b,g) << '\n';
  return 0;
}
