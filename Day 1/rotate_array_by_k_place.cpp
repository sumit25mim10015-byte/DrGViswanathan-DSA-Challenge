#include <iostream>
#include <vector>
using namespace std;

// rotate array by d places.
// Brute force approach
void brute(int arr[] , int n , int d)    // Time complexity = O(n)
{ 

    vector<int>temp(d);
    // store first d elements
    for(int i=0 ; i<d ; i++)
    {
        temp[i] = arr[i];
    }
    // shift remaining elements first
    for(int i=d ; i<n ; i++)
    {
        arr[i-d] = arr[i];
    }
    // copy temp element to the array
    int  j = 0;
    for(int i=n-d ; i<n ; i++)
    {
        arr[i] = temp[j];
        j++;
    } 
    // display roteted array
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

void optimal(vector<int>& arr , int n , int d)
{
    d = d % n;      // handle case when d<=n

    // reverse the first d elements
    reverse(arr.begin() , arr.begin()+d);  // arr + d = arr[d-1]
    // reverse remaining n-d elements
    reverse(arr.begin()+d , arr.begin()+n);   // arr + n = arr[n-1]
    // reverse the whole array
    reverse(arr.begin() , arr.begin()+n);

    // display the rotated array
    for(int i=0 ; i<n ; i++ )
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    vector<int> arr =  {1,2,3,4,5};
    int n = 5;
    int d = 3;
    optimal(arr,n,d);
    return 0;
}