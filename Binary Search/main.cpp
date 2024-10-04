#include <iostream>

using namespace std;

void print(int *arr, int i, int size) {
    for (int j = i; j < size; ++j) {
        cout<< arr[j] <<endl;
    } cout<< endl;
}

int binarySearch(int arr[7], int i, int size, int key) {
    cout<< endl;
    print(arr, i,size);
    if(i > size) {
        cout<< "Element not Found & array index is: ";
        return -1;
    }

    int mid = (i+size)/2;

    if(arr[mid] == key)
        return mid;

    if(arr[mid] < key)
        return binarySearch(arr, mid+1, size, key);
    else
        return binarySearch(arr, i, mid-1, key);
}

int main() {
    int arr[7] ={1,2,3,4,5,6,7};
    int size = 7;
    int key = 7;
    int index = binarySearch(arr, 0, size, key);

    cout << index;
    return 0;
}
