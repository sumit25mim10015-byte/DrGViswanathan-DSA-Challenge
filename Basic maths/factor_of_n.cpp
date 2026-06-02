#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void factor(int n)    // Time complexity = O(n)  brute force
{
    for(int i=1 ; i<=n ; i++)
    {
        if(n % i==0)
        {
           cout<<i<<" ";
        }
    }
}
void factor_o(int n) //Time complexity = O(sqrt(n))  optimal solution
{

    vector<int> factor;
    for(int i=1 ; i*i<=n ; i++)
    {
        if(n%i==0)
        {
           factor.push_back(i); 
            if(i!=n/i)
            {
                factor.push_back(n/i);
            }
        }
       
    }
    sort(factor.begin(),factor.end());
    for(int i=0 ; i<factor.size();i++)
    {
        cout<<factor[i]<<" ";
    }
}
int main()
{
    int n=36;
    factor_o(n);
}


// Time complexity = O(n)