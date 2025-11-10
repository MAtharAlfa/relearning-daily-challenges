#include <iostream>
#include <vector>
using namespace std;

void merge (vector<int>& leftArr, vector<int>& rightArr, vector<int>& arr) {
    int i = 0, l = 0, r = 0;
    while (l < leftArr.size() && r < rightArr.size())
    {
        if (leftArr.at(l) < rightArr.at(r))
        {
            arr.at(i) = leftArr.at(l);
            i++;
            l++;
        } else {
            arr.at(i) = rightArr.at(r);
            i++;
            r++;
        }
    }
    while (l < leftArr.size())
    {
        arr.at(i) = leftArr.at(l);
        i++;
        l++;
    }
    while (r < rightArr.size())
    {
        arr.at(i) = rightArr.at(r);
        i++;
        r++;
    }
}

void mergeSort (vector<int>& arr) {
    int length = arr.size();
    
    if (length <= 1) return; // base case

    int middle = length/2;

    vector<int> leftArr (arr.begin(), arr.begin() + middle);
    vector<int> rightArr (arr.begin() + middle, arr.end());

    int i = 0, j = 0;
    for (; i < length; i++)
    {
        if (i < middle)
        {
            leftArr[i] = arr[i];
        } else {
            rightArr[j] = arr[i];
            j++;
        }
    }
    mergeSort(leftArr);
    mergeSort(rightArr);
    merge(leftArr, rightArr, arr);
}

int main () {
    vector<int> arr = {18, 10, 123, 1 ,234, 1, 221, 5, 2};
    int length = arr.size();

    mergeSort(arr);

    for (int output : arr) {
        cout << output << " ";
    };

    return 0;
}