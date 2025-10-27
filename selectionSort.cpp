#include <algorithm>
#include <iostream>

void selectionSort(int arr[], int n) {
    for (size_t i = 0; i < n - 1; i++)
    {
        int maxminIndex = i;
        for (size_t j = i+1; j < n; j++)
        {
            if (arr[j] < arr[maxminIndex])
            {
                maxminIndex = j;
            }
        }
        std::swap(arr[i], arr[maxminIndex]);
    }
    
}

int main () {
    int n;
    std::cin >> n;
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    
    selectionSort(arr, n);

    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}