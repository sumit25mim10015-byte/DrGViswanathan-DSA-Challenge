#include <iostream>
using namespace std;

void print(int n)
{
    for(int i=0 ; i<=n ; i++)
    {
        int start = 1;
        if(i % 2 ==0)  start = 1;
        else  start = 0;
        for(int j=0 ; j<=n ; j++)
        {
            if(i>=j)
            {
                cout<<start;
                start = 1 - start;
            }
        }
        cout<<endl;
    }
}
int main()
{
    print(5);
    return 0;
}