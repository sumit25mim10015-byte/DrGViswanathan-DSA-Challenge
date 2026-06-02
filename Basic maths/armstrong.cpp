#include <iostream>
using namespace std;

void armstrong(int n)
{
    int sum = 0;
    int N = n;
    bool palindrome = true;
    
    while(n!=0)
    {
        int digit = n % 10;
        sum = sum + (digit*digit*digit);
        n/=10;
    }
    if(sum==N)  cout<<"Armstrong";
    else cout<<"Not armstorng";
   
    
}
int main()
{
    int n = 407;
    armstrong(n);
    return 0;
}

// Time complexity = O(log 10 n)