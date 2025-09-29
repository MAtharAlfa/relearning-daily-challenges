#include <iostream>
#include <string>

struct student {
    std::string name;
    int age;
    char grade;
};

int main (){
    student student1;

    student1.name = "Liam";
    student1.age = 35;
    student1.grade = 'A';

    std::cout << "Name: " << student1.name << "\n"
    << "Age: " << student1.age << "\n"
    << "Grade: " << student1.grade << "\n";
}