#include<iostream>
using namespace std;

void rotate(int a[],int n,int k)
{
    int arr[5] = {0};
   for(int i = 0; i<n; i++)
   {
        int mod = (i+k)%n;
        arr[i] = a[mod];
   }
   for(int i = 0; i<5; i++)
   {
        cout<<arr[i]<<" ";
   }
}
int main()
{
    int n[5] = {1,2,3,4,5};
    int k = 3;


    rotate(n,5,k);

    return 0;
}