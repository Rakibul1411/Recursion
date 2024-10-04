#include <iostream>

using namespace std;

int power(int a, int i) {
    //base case
    if(i == 0)
        return 1;
    if(i == 1)
        return a;
    int ans = power(a, i/2);
    if(i % 2 == 0)
        return ans*ans;
    else
        return a*ans*ans;

}

int main() {
    int a, b;
    cin>> a >> b;
    int ans = power(a, b);
    cout<< "Answer is " << ans << endl;
    return 0;
}
