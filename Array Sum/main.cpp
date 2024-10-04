#include <iostream>

using namespace std;

int add(int pInt[], int size, int currentIndex) {

    if(currentIndex>=size) {
        return 0;
    }
    return pInt[currentIndex] + add(pInt, size, currentIndex+1);
}

int main() {
    int n;
    cout<< "Enter the array size: ";
    cin>> n;
    int array[n];
    cout<< "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin>> array[i];
    }
    int size = sizeof (array)/sizeof (array[0]);
    int sum = add(array, size, 0);
    cout<< "Array sum is: ";
    cout<<sum;
    return 0;
}
