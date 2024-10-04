#include <iostream>

bool Search(int arr[5], int size, int key);

void print(int *array, int size);

using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    cout<<"Enter the search key: ";
    int key;
    cin>> key;
    bool ans = Search(arr, size, key);
    if(ans)
        cout<<"Found it";
    else
        cout<<"Not found";
    return 0;
}

bool Search(int arr[5], int size, int key) {
    print(arr, size);
    if(size==0)
        return false;
    if(arr[0] == key)
        return true;
    else{
        bool remainPart = Search(arr+1, size-1, key);
        return remainPart;
    }
}

void print(int *array, int size) {
    cout<< "Array size is: "<<size<<endl;
    for (int i = 0; i < size; ++i) {
        cout<< array[i] << " ";
    }
    cout<<endl;
}
