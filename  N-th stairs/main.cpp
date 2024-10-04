#include <iostream>

using namespace std;

int distinctWay(int stairs) {
      if(stairs < 0)
          return 0;
      else if(stairs == 0)
          return 1;
    int p = distinctWay(stairs-1)+ distinctWay(stairs-2);
    return p;
}

int main() {
    int stairs;
    cout<< "Enter number of stairs: ";
    cin>> stairs;
    int count = distinctWay(stairs);
    cout<< "Number of distinct ways: " << count;
    return 0;
}
