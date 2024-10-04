#include <iostream>

using namespace std;

int getSum(int arr[5], int size) {
    if(size==0){
        return 0;
    }
    return arr[size-1] + getSum(arr, size-1);
}

int main() {
    int arr[1] = {2};
    int size = 1;
    int sum = getSum(arr, size);
    cout<<"Sum is: "<<sum;
    return 0;
}
