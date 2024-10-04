#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(i > j)
        return true;
    if(str[i] != str[j])
        return false;
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}

int main() {
    string name;
    cout<< "Enter the string: ";
    cin>> name;
    bool p = checkPalindrome(name, 0, name.size()-1);
    if(p){
        cout<<"Given string is palindrome.";
    } else{
        cout<<"Given string is not palindrome";
    }
    return 0;
}

bool checkPalindrome(string string, int i, unsigned long j) {
    return false;
}
