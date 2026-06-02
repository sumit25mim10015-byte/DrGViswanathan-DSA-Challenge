#include <iostream>
#include <vector>
using namespace std;

void duplicate(int arr[] , int n)
{
    
    int j = 1;
   
    for(int i=0 ; i<n ; i++)
    {
        if(arr[j]!=arr[i])
        {
           arr[i+1] = arr[j];
           j++;
        }
        
       
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
   
}
int main()
{
    int arr[] = {2,2,2,2,2,2} , n=6;
    duplicate(arr, n);
}