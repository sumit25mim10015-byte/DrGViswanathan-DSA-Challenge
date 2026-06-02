#include<iostream>
#include<list>
using namespace std;

void exlist()
{
    list<int> v = {2,5,6};
    v.push_back(90);
    v.push_front(11);
    
    for(auto it : v)
    {
        cout<<it<<" ";
    }
}
int main()
{
    exlist();
}