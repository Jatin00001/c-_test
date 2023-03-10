#include<iostream>
using namespace std;
void printArr(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void bubble_sort(int a[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0; j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
void bubble_sort1(int a[],int n)
{
    for(int i = 1;i<n;i++)
    {
        for(int j = 0; j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int n[10]={10,9,8,7,6,5,4,3,2,1};
    bubble_sort1(n,10);

    printArr(n,10);
    return 0;
}