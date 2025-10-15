// Nama Program: Minimal Operations
// Nama Pembuat: Muhammad Athar Alfarisi
// NPM: 140810250005
// Tanggal Buat: 13/10/2025
// Deskripsi Program: 
// You are given an integer array nums (0-indexed). In one operation, you can choose an element of the array and increment it by 1.

// For example, if nums = [1,2,3], you can choose to increment nums[1] to make nums = [1,3,3].
// Return the minimum number of operations needed to make nums strictly increasing.

// An array nums is strictly increasing if nums[i] < nums[i+1] for all 0 <= i < nums.length - 1. An array of length 1 is trivially strictly increasing.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void inputVector (vector<int>& integers) {
    int input;
    while (cin >> input) 
    {
        integers.push_back(input);
    }
}

int minOp (vector<int>& integers) {
    int count;

    for (size_t i = 0; i < integers.size() - 1; i++)
    {
        while (integers.at(i) >= integers.at(i+1))
        {
            integers.at(i+1)++;
            count++;
        }
    }
    return count;
}


int main() {
    vector<int> integers;

    inputVector(integers);
    cout << minOp(integers);
}