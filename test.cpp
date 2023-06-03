#include<iostream>
#include<algorithm>
using namespace std;
int b_to_D(int n)
{
    int s = n;
    int powerof2 = 1;
    int ans = 0;
    while(s != 0)
    {
        int lastdigit = s %10 ;
        ans = ans + lastdigit * powerof2;
        powerof2 = powerof2 * 2;
        s = s/10;
    }
    return ans ;
}
int alternate_covt_dec(int n)
{
    int i=0;
    int ans = 0;
    int power = 1;
    while(n != 0){
        int bit = n & 1 ;
        if(bit == 1){
            ans = ans + power;
        }
        power = power * 2;
        n = n/10;
    }
    return ans ;
}
void count(int n)
{
    if(n==0)
        return ;
    
    cout<<n<<" ";
    count(n-1);cout<<endl;
    cout<<n<<" ";
    
}
int power(int n)
{
    // base case;
    if(n==0)
        return 1;
    return 2* power(n-1);
}
int fact(int n)
{
    if(n==0)
        return 1;
    return n* fact(n-1);
}
int main()
{
    int n;cin>>n;
    count(20);
    cout<<power(n)<<endl;
    cout<<fact(n);
}