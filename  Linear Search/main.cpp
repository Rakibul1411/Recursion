#include <iostream>

using namespace std;

bool findKey(int arr[], int size, int key) {
    if(arr[size] == key) {
        cout<<"Array index is: "<< size << endl;
        return true;
    }
    if(size==0)
        return false;

   bool p = findKey(arr, size-1, key);
    return p;
}

int main() {
    int arr[5] ={1,2,3,4,5};
    int size = 5;
    int key;
    cout<<"Enter the value you want to search: ";
    cin>> key;
    bool ans = findKey(arr, size-1, key);
    if (ans)
        cout<<"Find the number";
    else
        cout<<"Not Found";
    return 0;
}
