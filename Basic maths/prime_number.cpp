#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void prime(int n)   // Time complexity = O(n)
{   
    int count=0;
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count == 2)  cout<<"prime";
    else cout<<"Not prime";

}
void prime_o(int n) // Time complexity = O(sqrt(n))
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
    for(int i=0 ; i<factor.size() ; i++)
    {
        cout<<factor[i]<<" ";
    }
   
   


}

int main()
{
    int n =36;
    prime_o(n);
    
    return 0;
}