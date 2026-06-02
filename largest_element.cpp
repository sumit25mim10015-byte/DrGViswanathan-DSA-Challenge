#include <iostream>
#include <vector>
using namespace std;             // brute force approach is sort the array using sorting technique and return arr[n-1].

void largest(int arr[] , int n)   // optimal solution for largest element in an array.
{   
    
    int large = arr[0];
    for(int i=0 ; i<n ; i++)     // Time complexity si O(n).
    {
        if(arr[i]>large)
        {
            large = arr[i];

        }
    }
    cout<<"largest element is : "<<large;


}

int main()
{
    int arr[] = {12,34,23,86,33,22,56,90,53,23};
    largest(arr, 10);

}
