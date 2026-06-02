#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    void initialize(int l , int b)
    {
        length = l ;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
};
int main()
{
    rectangle r;
    r.initialize(10,6);
    cout<<r.area()<<endl;
    r.changeLength(20);
    cout<<r.area();
    return 0;
}