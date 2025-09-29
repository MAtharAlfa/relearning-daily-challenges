//ini latihan switch case

#include<iostream>

int main () {
    int day = 0;

    while (day < 1 || day > 7){
        std::cout << "What day of the week (using a number 1 to 7): ";
        std::cin >> day;

        switch (day) {
            case 1:
            std::cout << "Today is Monday";
            break;

            case 2:
            std::cout << "Today is Tuesday";
            break;

            case 3:
            std::cout << "Today is Wednesday";
            break;

            case 4:
            std::cout << "Today is Thursday";
            break;

            case 5:
            std::cout << "Today is Friday";
            break;

            case 6:
            std::cout << "Today is Saturday";
            break;

            case 7:
            std::cout << "Today is Sunday";
            break;

            default:
            std::cout << "Input error, please try again \n";
            break;
        } 
    }
}