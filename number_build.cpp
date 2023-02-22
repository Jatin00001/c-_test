#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int n1;
    int ans = 0;

    // FOR same flow
    // while (n!=0)
    // {
    //     cin>>n1;
    //     ans = (ans * 10 ) + n1;
    //     n--;

    // }
    // // cout<<ans<<endl;
    int power = 1;
    while (n!=0)
    {
        cin>>n1;
        ans = (power*n1) + ans;
        power = power * 10 ;
        n--;

    }
    cout<<ans<<endl;
    
    


    return 0;
}