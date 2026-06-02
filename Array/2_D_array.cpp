#include <iostream>
using namespace std;

// int main()
// {
//     int A[3][4] = {{1,2,3,4},{1,2,3,4},{2,3,4,5}};
//     int B[3][4] = {{1,2,3,4},{1,2,3,4},{2,3,4,5}};


//     for(int i=0 ; i<3 ; i++)
//     {
//         for(int j=0 ; j<4 ; j++)
//         {
//             cout<<A[i][j] + B[i][j]<<" ";
//         }
//         cout<<endl;
    
//     }
//     return 0;

// }

int main()
{
    int A[4][2] = {{1,2},{5,6},{3,4},{7,8}};
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    
    }

}