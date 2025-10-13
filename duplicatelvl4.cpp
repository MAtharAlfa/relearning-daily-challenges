// Nama Program: Contain Duplicate
// Nama Pembuat: Muhammad Athar Alfarisi
// NPM: 140810250005
// Tanggal Buat: 13/10/2025
// Deskripsi Program: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include<iostream>
using namespace std;

void inputArray (int array[], int sizeOfArray) {
    for (size_t iteration = 0; iteration < sizeOfArray; iteration++)
    {
        cin >> array[iteration];
    }
}

bool dupeValue (int array[], int sizeOfArray) {
    for (size_t iteration = 0; iteration < sizeOfArray; iteration++)
    {
        int checkValue = array[iteration];
        for (size_t innerIteration = 0; innerIteration < sizeOfArray; innerIteration++)
        {
            if (iteration == innerIteration) continue;
            if (checkValue == array[innerIteration]) return true;
        }
    }

    return false;
}

int main() {
    int sizeArray;
    cin >> sizeArray;
    int arrayNumber[sizeArray];

    inputArray(arrayNumber, sizeArray);

    cout << boolalpha << dupeValue(arrayNumber, sizeArray);
}