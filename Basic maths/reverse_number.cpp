#include <iostream>
using namespace std;

void reverse(int n)
{
    int rev = 0;
    while(n!=0)
    {
        int digit = n % 10;
        rev = rev*10 + digit;
        n/=10;
    }
    cout<<rev;
}
int main()
{
    int n = 2485;
    reverse(n);
    return 0;
}

// Time complexity = O(log 10 n)