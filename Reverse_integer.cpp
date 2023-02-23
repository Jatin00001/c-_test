#include<iostream>
#include<climits>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int ans = 0;
    while (n!=0)
    {
        int lastdigit = n % 10;
        if( (ans > INT_MAX/10) || (ans < INT_MIN) ){
            cout<<"0"<<endl;
            break;
        }
        else{
            ans = (ans*10) + lastdigit;
            
        }
        n = n/10 ;
        
    }
    cout<<"Answer is "<<ans<<endl;
    

    return 0;
}