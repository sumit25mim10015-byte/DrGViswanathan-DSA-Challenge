#include<iostream>
#include<vector>
using namespace std;

void insert()
{
    vector<int> v = {2,5,6,7,4,3,2,6};
    v.insert(v.begin()+1 ,2, 300);   // insert 2 times 300 after 2
    v.insert(v.begin() ,300);   // insert 300 at the beginning
   
    for(auto it : v)
    {
        cout<<it<<" ";
    }
}
int main()
{
    insert();
}