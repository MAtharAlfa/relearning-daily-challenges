// Nama Program: Sort by Insanity (Parity)
// Nama Pembuat: Muhammad Athar Alfarisi
// NPM: 140810250005
// Tanggal Buat: 13/10/2025
// Deskripsi Program: 
// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.
#include <iostream>
#include <vector>
using namespace std;

void swap (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void inputVector (vector<int>& integers) {
    int input;
    while (cin >> input) 
    {
        integers.push_back(input);
    }
}

void bubbleSort (vector<int>& numbers) {
    for (size_t i = 0; i < numbers.size()-1; i++)
    {
        for (size_t slide = 0; slide < numbers.size()-1-i; slide++)
        {
            if (numbers.at(slide) > numbers.at(slide+1))
            {
                swap(numbers.at(slide), numbers.at(slide+1));
            }
        }     
    }
}

void sortByParity (vector<int>& numbers) {
    for (size_t i = 1; i < numbers.size(); i++)
    {
        if (numbers.at(i) % 2 == 0) 
        {
            for (size_t slide = 0; slide < i; slide++)
            {
                if ((numbers.at(i-1-slide) % 2) != 0)
                {
                    swap(numbers.at(i - slide), numbers.at(i - 1 - slide));
                }
            }     
        }
    }

    for (int output : numbers)
    {
        cout << output << " ";
    }
}

int main() {
    vector<int> integers;

    inputVector(integers);
    bubbleSort(integers);
    sortByParity(integers);
}