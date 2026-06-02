#include <iostream>
using namespace std;

int s(int n  )
{   
    int d=0 , k=0;
    if(n==0) return 1;
    d = n%10;
    
    k = n/10;
    
    return d + s(k);
    

}

int main()
{
    int n = 2048;
    cout<<s(n);
}