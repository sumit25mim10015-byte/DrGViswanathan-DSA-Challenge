#include <iostream>
using namespace std;



int main()
{
    int n;
    cout<<"enter size of an array: ";
    cin>>n;

    int *arr = new int [n];
    cout<<"Enter elements of an array "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;



}