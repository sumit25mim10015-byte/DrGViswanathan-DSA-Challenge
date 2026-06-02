/*
2^5 = 2*2*2*2*2 
*/
#include <iostream>
using namespace std;

int pow(int m , int n)
{
    if(n==0)
        return 1;
    else 
        return pow(m,n-1)*m;
}

int Pow(int m , int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
       return pow(m*m,n/2);
    else
        return m*pow(m*m,(n-1)/2);
}

int main()
{
    int m = 2 , n = 9;
    cout<<pow(m,n)<<endl;
    cout<<"power M^N "<<Pow(2,9);
}