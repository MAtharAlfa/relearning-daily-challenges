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

    // The compiler will make its default constructor if not defined
    // A constructor needs to be public (at this stage of my learning, at least)
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("John Doe", "FreeCodeCamp.Org", 25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Jane Doe", "Google", 30);
    employee2.IntroduceYourself();

    return 0;
}