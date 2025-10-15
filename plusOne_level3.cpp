// Nama Program: Two sum
// Nama Pembuat: Muhammad Athar Alfarisi
// NPM: 140810250005
// Tanggal Buat: 13/10/2025
// Deskripsi Program: 
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// void swap (int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

void inputVector (vector<int>& integers) {
    int input;
    while (cin >> input) 
    {
        integers.push_back(input);
    }
}

void plusOne (vector<int>& numbers) {
    string store;
    for (int output: numbers)
    {
        store += to_string(output);
    }

    int plus1 = stoi(store);
    plus1++;

    numbers.clear();

    while (plus1 > 0)
    {
        numbers.push_back(plus1 % 10);
        plus1 /= 10;
    }

    // for (size_t i = 0; i < numbers.size()/2; i++)
    // {
    //     swap(numbers.at(i), numbers.at(numbers.size() - 1 - i));
    // }

    reverse(numbers.begin(), numbers.end());
    

    for (int output : numbers)
    {
        cout << output;
    }
}

int main() {
    vector<int> integers;

    inputVector(integers);

    plusOne(integers);
}