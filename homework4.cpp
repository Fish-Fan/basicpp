#include "iostream"
#include "vector"
using namespace std;
class Employee {
  public:
      int id;
      double salary;
      Employee() {

      }

      Employee(int id) {
        this->id = id;
      }

      virtual double getSalary() {
        return salary;
      }
};

class Manager:public Employee {
  public:
    Manager() {
      salary = 8000;
    }

    Manager(int id) {
      salary = 8000;
      this->id = id;
    }
};

class SalesManager: public Employee {
  private:
    double salesMoney;
  public:

    SalesManager() {
      salary = 5000;
    }

    SalesManager(int id) {
      new(this) SalesManager();
      salary = 5000;
      this->id = id;
    }
    virtual double getSalary() {
      return (salary + salesMoney*0.05);
    }

    virtual void setSalesMoney(double salesMoney) {
      this->salesMoney = salesMoney;
    }
};

class Tech:public Employee {
  private:
    int hours;
  public:

    Tech(int id) {
      this->id = id;
    }
    virtual double getSalary() {
      return (hours * 20);
    }

    virtual void setHours(int hours) {
      this->hours = hours;
    }
};

int main() {
  Employee* manager = new Manager(1);
  Employee *salesManager = new SalesManager(2);
  dynamic_cast<SalesManager*>(salesManager)->setSalesMoney(999.9);
  Employee *tech = new Tech(3);
  dynamic_cast<Tech*>(tech)->setHours(20);

  std::vector<Employee*> v;
  v.push_back(manager);
  v.push_back(salesManager);
  v.push_back(tech);

  for(int i = 0;i < v.size();i++) {
    cout<< v[i]->getSalary() <<endl;
    cout<< v[i]->id <<endl;
  }

  return 0;
}
