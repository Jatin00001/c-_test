#include<iostream>
using namespace std;
int main()
{
    int n;cout<<"Enter number  :--> ";
    cin>>n;
    int ans = 0;
    int power = 1;
    while (n!=0)
    {
        int rem = n%2;
        // cout<<rem<<" ";
        ans = ans * (power*10);
        n = n/2;
    }
    
        cout<<ans<<" ";


    return 0;
}