#include <iostream>
#include <map>
#include <unordered_map>    // unorderd map is faster and runs with O(1)
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,3,3};
    int n = 6;
    map<int , int> hash;    // unordered map gives value pairs unorder and map gives in order

    // for storing each element key and value.

    
    for(int i=0 ; i<n ; i++)
    {
        hash[arr[i]]++;
    }

    // for display each element key and its value.
    int highest = INT_MIN;
    int lowest = INT_MAX;

    int highestelement;
    int lowestelement;
    for(auto it : hash)
    {
        if(it.second>highest)
        {
            highest = it.second;
            highestelement = it.first;
        }
        else if(it.second<lowest)
        {
            lowest = it.second;
            lowestelement = it.first;
        }
    }
    cout<<highestelement;
    // cout<<lowestelement<<" = "<<lowest<<endl
    return 0;
}