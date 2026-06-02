#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& arr)
{   int count = 0;
    int n = arr.size();
    for(int i=n-1 ; i>=1 ; i--)
    {
        for(int j=0 ; j<i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                count++;
            }
        }

    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<count;    // gives how many times swap happens.
}


int main()
{
    vector<int> arr = {7,12,9,11,3};
    bubble_sort(arr);
    return 0;
}