#include<iostream>
using namespace std;


int main()
{
    int a[9]={1,1,5,3,2,3,4,2,4};
    int ans =  0;
    // for(int i = 0 ; i<9 ; i++)
    // {
    //     cout<<a[i]<<" ";
    // }cout<<endl;
    // cout<<ans<<endl;
    for(int i = 0 ; i<9 ; i++)
    {
        ans  = ans ^ a[i];
        cout<<ans<<" ";

        // cout<<ans<<" ";
    }cout<<endl;
    cout<<"ans is :--> "<<ans<<endl;



    return 0;
} 