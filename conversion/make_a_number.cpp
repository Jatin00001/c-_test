#include<climits>
#include<iostream>
#include<array>
using namespace std;
int make_number(int *a,int size){
    int ans = 0;
   for(int i = 0; i<size; i++){
        if(ans>INT_MAX/10){
            cout<<"-1"<<endl;
            break;
        }
        else if(a[i]>=10)
        {
            int a1 = a[i];
            while(a1)
            {
                int last= a1%10;
                ans = ans*10 + last;
                a1 = a1/10;
            }
            
        }
        else{
            ans = ans*10 + a[i];
        }
   }
    cout<<ans<<endl;
}

int main()
{
    int a[16]= {123};
    int ans  = make_number(a,1);

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