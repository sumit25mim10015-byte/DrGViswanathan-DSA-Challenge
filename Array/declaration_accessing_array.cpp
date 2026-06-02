#include <iostream>
using namespace std;

int main()
{
    int A[] = {2,3,4,5,6,7,4};

    for(int i=0 ; A[i]!='\0' ; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<*(A+5);
    return 0;
}