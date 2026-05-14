#include <iostream>
using std::string;

class Employee { //defaults to private
private:
    string Name;
    string Company;
    int Age;
public:
    
    void setName(string name) { //setter
        if (name.size() > 10) return;
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) {
        if(Company == company) return;
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age > 17) //constraint
        Age = age;
    }
    int getAge() {
        return Age;
    }

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

    employee1.setAge(15);
    employee1.setName("Alexander Beau Coup de Broglie");
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old and works at " << employee1.getCompany();

    return 0;
}