#include<climits>
#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
void reverse(int& n)
{
    int power = 1;
    int ans = 0;
    while (n)
    {
        int last_digit = n%10;
        ans = (last_digit*power) + ans;
        // cout<<ans<<" ";  
        // ans = ans*10 + last_digit;
        power = power * 10 ;
        n = n/10;
    }
    // cout<<ans<<endl;
    n = ans;
    return;
    
}


int main()
{
//     int a[16]= {123};
//     int ans  = make_number(a,1);

    int n = 123;
    reverse(n);
    cout<<n<<endl;


    return 0;
}

 // array<string, 5> ar2{"1", "2","3", "4","5"};
    // // for(int i=0;i<5;i++)
    // // {
    // //     cout<<ar2[i]<<" ";
    // // }cout<<endl;
    // ar2[2]="45";
    // int ch = ar2[2];

    // for(auto i: ar2)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<ar2.size()<<endl;