#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int pos=  i;
        for(int j = i+1 ; j<n;j++)
        {
            if(arr[j]<arr[pos])
            {
                pos  = j;
            }
        }
        swap(arr[pos],arr[i]);
    }
}
// 4 3 2 1 
void select(int arr[],int n)
{
    for(int i = 0 ;i<n-1;i++)
    {
        int first  = i;
        for(int j = i+1; j<n;j++)
        {
            if(arr[j]<arr[first])
            {
                first = j;
            }
        }
        swap(arr[i],arr[first]);
    }
}
int main()
{
    int arr[5]={5,55,3,2,1};


    select(arr,5);
    for(int i = 0 ; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}  