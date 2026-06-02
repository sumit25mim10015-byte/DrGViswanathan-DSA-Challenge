#include <iostream>
using namespace std;

int sorted(int arr[] , int n)    // Time complexity is O(n).
{
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]>=arr[i-1])
        {

           
        }
        else 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1,2,3,0,5,6,7,8} , n=8;
    cout<< sorted(arr, n);

    
}