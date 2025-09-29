#include <iostream>
#include <string>

int main () {
    std::string food = "pizza";
    std::string &delicious = food;
    std::string* ptr = &delicious;

    std::cout << delicious << "\n";
    std::cout << &delicious << "\n";
    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

    int value = 10;
    int* ptrInt = &value;

    std::cout << ptrInt << "\n";

    std::string species = "monke";
    std::string* address1 = &species;
    *address1 = "monnyet";

    std::cout << species << "\n";
}