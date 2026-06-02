#include <iostream>
using namespace std;

void palindrome(int n)
{
    int rev = 0;
    int N = n;
    bool palindrome = true;
    while(n!=0)
    {
        int digit = n % 10;
        rev = rev*10 + digit;
        n/=10;
    }
    if(N==rev) palindrome = true;
    else palindrome = false;
    cout<<boolalpha<<palindrome;    //boolalpha tells C++ to print boolean values as words instead of numbers.
    
}
int main()
{
    int n = -121;
    palindrome(n);
    return 0;
}

// Time complexity = O(log 10 n)