#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void explainvector()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.erase(v.begin());
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    
    // cout<<v[0]<<endl;
    // cout<<v[1];
}

void pair_in_vec()
{
    vector<pair<int,int>> p;
    p.push_back({10,20});
    cout<<p[0].first<<endl;
}

int main()
{
    explainvector();
    // pair_in_vec();
}