#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int i = 0,j=n-1;
    while (i<j)
    {
        swap(arr[i++],arr[j--]);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    reverse(arr,5);
    for(int i = 0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}