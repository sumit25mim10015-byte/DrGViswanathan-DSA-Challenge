#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int Ifact(int a)
{  int fact = 1;
   for(int i=1 ; i<=a ; i++ )
   {
        fact =  fact*i;
        
   }
   return fact;
}

int main()
{
    int n = 5;
    cout<<fact(n)<<endl;
    cout<<Ifact(5);
}