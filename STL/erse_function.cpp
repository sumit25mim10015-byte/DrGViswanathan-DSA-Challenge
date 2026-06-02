#include<iostream>
#include<vector>
using namespace std;

void erase()
{
    vector<int> v = {2,5,6,7,4,3,2,6};
    // v.erase(v.begin())   // erase 2
    v.erase(v.begin()+2 ,v.begin()+4 ); // erase 6 and 7
    for(auto it : v)
    {
        cout<<it<<" ";
    }
}
int main()
{
    erase();
}