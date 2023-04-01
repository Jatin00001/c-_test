#include<iostream>
#include<climits>
using namespace std;
int sumofn(int n)
{
    if(n >=0 && n<=9){
        return n;
    }
    int sum  = 0;
    while (n != 0)
    {
        int last_digit = n%10;
        if(sum >= INT_MAX/last_digit)
            return -1;
            
        
        sum  += last_digit;
        n /= 10;
    }
    return sum;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofn(n);
    return 0;
}