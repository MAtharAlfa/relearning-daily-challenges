#include <iostream>
using std::string;

class Employee { //defaults to private
public:
    string Name;
    string Company;
    int Age;
    void IntroduceYourself() {
        std::cout << "Name - " << Name << "\n";
        std::cout << "Company - " << Company << "\n";
        std::cout << "Age - " << Age << "\n\n";
    }

};

int main() {
    Employee employee1;
    employee1.Name = "John Doe";
    employee1.Company = "freeCodeCamp";
    employee1.Age = 25;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Jane Doe";
    employee2.Company = "Google";
    employee2.Age = 30;
    employee2.IntroduceYourself();

    return 0;
}