#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    for (size_t gap = n/2; gap > 0; gap /= 2)
    {
        for (size_t i = gap; i < n; i++)
        {
            int insert = arr[i];
            int j = i;
            while (gap >= 0 && arr[j-gap] > insert)
            {
                arr[j] = arr[j-gap];
                j -= gap;
            }
            arr[j] = insert;
        }
        
    }
    
}

int main () {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    shellSort(arr, n);

    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    delete[] arr;
}