#include<iostream>
using namespace std;


int main()
{
    int n;cin>>n;
    int i = 1;
    


    while(i<=n)
    {
        int j = 1;
        int count = i;
        while (j<=i)
        {
            // cout<<count<<" ";
            // count++;
            cout<<n;    
            j++;
        }
        cout<<"\n";
        i++;
        
    }


    // while(i<=n)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
        
    // }
    
    return 0;
}