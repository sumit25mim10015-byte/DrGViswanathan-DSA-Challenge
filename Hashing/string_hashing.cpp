#include <iostream>
using namespace std;

// ASCAII VALUES ARE  a=97 , b =98 , c=99.......

void hashi(string s)
{    
    int hash[26] = {0};
    // for counting each frequancy
    for(int i=0 ; i<s.size() ; i++)
    {
        hash[s[i] - 'a']++;
    }

    // for display
    for(int i=0 ; i<26 ; i++)
    {
        if(hash[i]>0)
        {
            char ch = i + 'a';
            cout<<ch <<" = "<<hash[i]<<endl;
        }
    }

    
}
int main()
{  
   string a = "my name is sumit singh thakur and currently pursuing integrated mtech in artificial intelligence";
   hashi(a);
   return 0; 
}