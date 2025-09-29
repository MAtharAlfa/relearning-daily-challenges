#include <iostream>

enum Difficulty {
    EASY,
    MEDIUM,
    HARD,
    IMPOSSIBLE
};

int main () {
    enum Difficulty variable = IMPOSSIBLE;
    std::cout << &variable;
}