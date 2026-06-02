#include <iostream>
using namespace std;

// GCD means highhest common factor of two number.

int gcd_o(int a , int b)   // optimal solution of gcd and complexity is O(log n)
{
    while(a>0 && b>0)
    {
        if(a>b)  a = a % b;
        else     b = b % a;
    } 
    if(a==0) return b;
    return a; 
}
int gcd(int a , int b)     // Brute force approach for gcd of two numbers O(n)
{
    int ans = 1;
    for(int i=1 ; i<=min(a,b) ; i++)
    {
        if(a%i==0 && b%i==0 )
        {
            ans = i;
        }
    }
    return ans;
}
                    
int main()
{
  
    cout<<gcd_o(20,15);
    return 0;
}
