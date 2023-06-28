#include<iostream>
#include<climits>
using namespace std;

int binarynumber(int m)
{
    int ans = 0;
    int power = 1;
    while (m!=0)
    {
        int bit = m & 1 ;
        ans  = (bit*power) + ans ;
        power = power * 10;
        m = m >> 1; 
        cout<<"m is : "<<m<<endl;

    }
    return ans;
    
}
int power(int a ,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b == 1)
        return a;
    
    int ans = power(a , b/2);
    if(b&1){
        return a* ans * ans ;
    }
    else{
        return ans *ans ;
    }
}
int dectobinary(long long int n)
{
    int ans = 0;
    int i = 0;
    while(n)
    {
        int digit = n %10;
        if(digit == 1)
        {
            ans  = ans + power(2,i);
        }
            // cout<<power(2,i)<<" ";
        i++;
        n = n/10;
    }
    return ans;

}

int main(){
    // cout<<binarynumber(25);
    // cout<<dectobinary(11000000001)<<endl;
    cout<<power(2,30);
 
    return 0;
}