#include <iostream>

using namespace std;

void sortArray(int* arr, int i) {
    if(i == 0 || i == 1)
        return;
    for (int j = 0; j < i-1; ++j) {
         if(arr[j] > arr[j+1]){
             swap(arr[j], arr[j+1]);
         }
    }

    sortArray(arr, i-1);
}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};
    cout<<"Before Bubble sort: ";
    for (int i = 0; i < 5; ++i) {
        cout<< arr[i] << " ";
    }
    cout<< endl ;
    sortArray(arr, 5);
    cout<<"After Bubble sort: ";
    for (int i = 0; i < 5; ++i) {
        cout<< arr[i] << " ";
    }
    return 0;
}
