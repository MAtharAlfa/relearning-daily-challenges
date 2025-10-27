#include <iostream>
#include <algorithm>

void bubbleSort(int arr[], int n) {
    bool swapped = false;
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
        
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

    bubbleSort(arr, n);

    for (int x : arr) {
        std::cout << x << " ";
    }
}