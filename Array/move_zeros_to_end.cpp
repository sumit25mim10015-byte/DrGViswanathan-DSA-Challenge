#include <iostream>
#include <vector>
using namespace std;

// Brute force approach to move all zeros at the end.
void brute(vector<int>& arr , int n)      // Time complexity = O(n)
{
    vector<int> temp;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    int countzero = arr.size() - temp.size();
    
    for(int i=0 ; i<countzero ; i++)
    {
        temp.push_back(0);
    }
    arr = temp;
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}

void optimal(vector<int>& arr , int n)
{
    int j = 0;
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }

    }
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr  = {1,2,0,0,3,4,5,0,6} ;
    int n = 9;
    optimal(arr , n);
    return 0;
}