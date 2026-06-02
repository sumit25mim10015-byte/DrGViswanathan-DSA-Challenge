#include <iostream>
using namespace std;    //  brute force approach is first sort array and compare which takes O(n log n)-- worst case.



void se_largest(int arr[] , int n)   // Better approach to find second largest element  O(2n)
{
    int largest = INT_MIN;
    int s_largest = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    for(int i=0 ; i<n ;i++)
    {
        if(arr[i]>s_largest && arr[i]!=largest)
        {
            s_largest = arr[i];
        }

    }
    if(s_largest == INT_MIN)
    {
        cout<<-1;
    }
    else{
        cout<<s_largest;
    }
}

void second_largest(int arr[] , int n)   //optimal solution for finding second maximum with O(n)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest)
        {
            second_largest = arr[i];
        }
        
    }
  
    if(second_largest == INT_MIN)
    {
        cout<<-1;
    }
    else{
        cout<<second_largest;
    }
    

}

int main()
{
    int arr[] = {8,8,8,8,8};
    int n = 5;
    second_largest(arr , n);
}