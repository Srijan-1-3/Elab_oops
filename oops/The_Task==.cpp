/* The task is to overload the == operator to check whether the given number is Palindrome Number or not */

#include<iostream>
using namespace std;
class compare {
public:
    int isPalindrome(int x) {
        int r,sum=0;
        while (x>0) {
            r=x%10;
            sum=(sum*10)+r;
            x=x/10;
        }
        return sum;
    }
};
int main() {
    int x, arm;
    cin >> x;
    compare obj;
    arm = obj.isPalindrome(x);
    if (arm == x) {
        cout << "Palindrome number"; 
    } else {
        cout << "Not a Palindrome number";
    }
    return 0;
    cout<<"void operator ==(compare int isPalindrome()";
}
