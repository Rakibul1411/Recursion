#include <iostream>

int power(int n, int i);

using namespace std;
int main() {
    int base, p;
    cin>> base >> p;
    int ans = power(base, p);
    cout << ans <<endl;
    return 0;
}

int power(int b, int p) {
    if(p==0)
        return 1;
    return b * power(b, p-1);
}
