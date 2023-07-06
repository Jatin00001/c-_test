#include<iostream>
#include<climits>
#include<array>
using namespace std;


int main()
{
    array<int,9>a{1,2,3,4,5,1,2,3,4};
    // xor use for we know xor  0 ^ 0 = 0 && 0 ^ 1 = 1
    int n = 0;
    for(int i = 0;i<a.size();i++)
    {
        n = n ^ a[i];
    }
    cout<<n<<endl;
    // int a[5]={1,2,1,2,3};
    // int ans = 0;
    // cout<<rec(a,4,ans);
    // cout<<endl;
    // cout<<ans<<" ";


    return 0;
}