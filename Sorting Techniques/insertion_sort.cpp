#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& arr)
{
    int n = arr.size();
    for(int i=1 ; i<n-1 ; i++)   // start from index 1 (key element)
    {
        int j = i;
        while(j>0 && arr[j-1]>arr[j])
        {   
            // compare and shift element.
            swap(arr[j-1],arr[j]);
            j--;
        
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {5,3,4,1,2};
    insertion_sort(arr);
    return 0;
}