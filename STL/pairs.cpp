#include <iostream>
#include <utility>
using namespace std;

void examplepairs()
{
    pair <int , int > p = {1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair <int, pair <int,int>> a = {1,{3,2}};
    cout<<a.first<<endl;
    cout<<a.second.first<<endl;
    cout<<a.second.second<<endl;

    pair <int , int> arr[] = {{1,2} , {3,4}};  // array can also be stored in the form of pair.
                                               // {1,2} is index 0 of array and {3,4} is 1st index of array.
    cout<<arr[0].first;


}

void marks()
{
    pair<int , int> m ;

    cout<<"Enter your roll no: ";
    cin>>m.first;
    cout<<"Enter your marks: ";
    cin>>m.second;

    cout<<"Roll no = "<<m.first;
    cout<<"\nMarks = "<<m.second;
}

void findmax()
{
    pair<int , int> p[] = {{10,20},{20,5},{34,1}};
    int sum =0 , max = INT_MIN;
    for(int i=0 ; i<3 ; i++)
    {
        int sum = p[i].first + p[i].second;
        if(sum>max)
           max = sum;
        
           
        

       

    }
    cout<<max;
}
void swap()
{   pair<int , int> p = {12,20}; 
    int temp = p.first;
    p.first = p.second;
    p.second = temp;
    cout<<p.first<<endl;
    cout<<p.second<<endl;

}
int main()
{
    examplepairs();
    marks();
    findmax();
    swap();

}