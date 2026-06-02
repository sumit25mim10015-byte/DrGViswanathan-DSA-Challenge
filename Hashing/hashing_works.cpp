#include <iostream>
#include <vector>
using namespace std;

void hashing(int arr[], int n)   // Brute force approch  O(n X q)

{   
    int count1=0 , count2=0 , count3=0;
    // int arr[] = {1,2,3,3,2,1,2,1,2,3,1};
    // now count how many times each number appears.

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2)
        {
            count2++;
        }
        else if(arr[i]==3)
        {
            count3++;        // for 50 elements it takes a lot of time and condume memory , so we use hashing method.
        }
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    cout<<count3<<endl;
    
}

void hashi(int arr[] ,int n)     // optimal solution and best approach for count frequancy    O(n+q)
{
    int hash[50] = {0};

    for(int i=0 ; i<=n ; i++)
    {
        hash[arr[i]]++;
    }
    cout<<hash[1]<<endl;
    cout<<hash[10];
}
int main()
{
    int A[] = {1,2,3,3,2,1,2,1,2,3,1};
    int n = 11;
    hashi(A , n);
}
