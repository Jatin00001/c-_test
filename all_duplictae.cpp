#include<iostream>
#include<algorithm>
using namespace std;
int all_dupli(int a[],int n)
{
    // int bigger = a[n-1];
    // cout<<bigger<<endl;
    for(int i = 0;i<n;i++)
    {
        if(a[i]==a[i+1] && i+1<n){
            cout<<a[i]<<" ";
        }
    }
}
int main()
{
    int arr[6];
    for(int i = 0;i<6;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr + 6);
    all_dupli(arr,6);


    return 0 ;
}