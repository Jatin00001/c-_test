#include<iostream>
using namespace std;

int sqroot(int num)
{
    int s = 0;
    int ans = -1;
    int e = num;
    int mid  = s + (e-s)/2;
    while (s<=e)
    {
        if(mid*mid == num)
        {
            return mid;
        }
        if(mid*mid > num)
        {
            e = mid - 1;
        }
        if(mid*mid < num)
        {
            ans  = mid ; 
            s  = mid + 1;
        }
        mid  = s + (e-s)/2;
    }
    return ans;
    
}
double precion_part(int n,int ans,int n1)
{
    double fraction = 1;
    double temp  = ans ;
    for(int i = 0 ; i<n ;i++)
    {
        fraction = fraction/10 ;
        for(double j = temp; j*j<n1 ; j=j+fraction)
        {
            temp = j;
            // cout<<j<<" ";10
        }
    }
    return temp;
}
int main()
{
    int n;cin>>n;
    int temp = sqroot(n);
    cout<<temp<<endl;
    cout<<precion_part(10,temp,n);
    // cout<<ans<<endl;
}