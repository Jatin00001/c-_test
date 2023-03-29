#include<iostream>
using namespace std;
int main()
{
    // int n = 1200056;
    // int ans = 0;
    // while(n!=0)
    // {
    //     int last = n%10;
    //     ans  = (ans *10) + last;

    //     n = n/10;
    // }
    // cout<<ans;


    // For reverse
    // long long int power = 1;
    // while(n!=0)
    // {
    //     int last = n%10;
    //     ans  = (last * (power) + ans);
    //     power = power * 10;
    //     // cout<<"Power "<< power <<endl;
    //     n = n/10;
    //     cout<<ans<<endl;
    // }

    // // cout<<ans;

    int n ;
    cin>>n;
    int ans = 0;
    int power = 1;
    while (n!=0)
    {
        int bit  = n & 1;
        ans = (bit * (power)) + ans;
        cout<<power<<endl;
        power = power *  10;
        n = n >> 1;
    }
    cout<<"ans is "<<ans<<endl;
    return 0;
}