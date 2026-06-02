#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>& arr)
{
    int count =0;
    int n = arr.size();
    for(int i=0 ; i<n-1 ; i++)
    {
        int mini = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
                count++;
            }

        }
        swap(arr[i], arr[mini]);
        
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    cout<<count;   // if 0 array is sorted.

}

int main()
{
    vector<int> arr = {12,14,16,18,20};
    int n  = 5;
    selection_sort(arr);
}