#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge both halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted temp back into arr
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}


void mergesort(vector<int>& arr , int low , int high)
{   
    int mid;
    if(low<high)
    {
        mid = (low + high)/2;
        mergesort(arr , low , mid);
        mergesort(arr,mid+1,high);
        merge(arr , low , mid , high );

    }
    

}

int main()
{
    vector<int> arr = {38,27,43,10};
    mergesort(arr , 0 , arr.size()-1);
    for(int i=0 ; i<4 ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}