/*
12345
1234
123
12
1



*/


#include <iostream>
using namespace std;
void print(int n)
{
    for(int i=1 ; i<n ; i++)
    {
        for(int j=1 ; j<n-i; j++)
        { 
            
            cout<<j;
            
        }
        cout<<endl;
    }

}
int main()
{
    print(6);
    return 0;
}