#include<bits\stdc++.h>
using namespace std;

void printarr(int arr[],int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inpt(int arr[],int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Input Done "<<endl;
}
int find_uniq(int a[],int n)
{
   int ans = 0;
   for(int i = 0;i<n;i++)
   {
        ans  = ans^a[i];
   }
   return ans;
}
int main()
{
    int a[7];
    inpt(a,7);
    printarr(a,7);
    cout<<find_uniq(a,7);


}