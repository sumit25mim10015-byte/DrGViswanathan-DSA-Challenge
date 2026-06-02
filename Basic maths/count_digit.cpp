#include <iostream>
using namespace std;

void digit(int n)
{
    int count = 0;
    while(n!=0)
    {
        int digit = n % 10;
        count++;
        n/=10;
    }
    cout<<count;
}
int main()
{
    int n = 2485;
    digit(n);
    return 0;
}

// Time complexity = O(log 10 n)

