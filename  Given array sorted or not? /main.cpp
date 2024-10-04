#include <iostream>

using namespace std;

bool isSorted(int arr[], int size) {
    if(size==0 || size==1)
        return true;
    if (arr[0] > arr[1])
        return false;
    bool remainPart = isSorted(arr+1, size-1);
    return remainPart;
}

int main() {
    int n;
    cout<< "Enter the array size: ";
    cin >> n;
    int array[n];
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin>> array[i];
    }
    bool ans = isSorted(array, n);
    if(ans)
        cout<< "Array is Sorted"; // applied for only Ascending order sorted array
    else
        cout<< "Array is not Sorted";
    return 0;
}
