#include<iostream>
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
void swap_alt(int arr[],int n)
{
    for(int i = 0; i<n; i = i+2)
    {
        if(i+1<n)
            swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int ar[10];
    inpt(ar,10);
    printarr(ar,10);
    swap_alt(ar,10);
    printarr(ar,10);


}