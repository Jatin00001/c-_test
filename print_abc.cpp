#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    
    // with char
    // char a = 'A';
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<a<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     a++;
    //     i++;
        
    // }

    // without char bucket
    int i=1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+i-1;
            cout<< ch<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
    
}