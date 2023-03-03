#include<iostream>
using namespace std;

int find_duplicate(int arr[],int size)
{
    int ans = 0;
    for(int i = 0 ; i < size ; i++)
    {
        ans   = ans ^ arr[i];

    }
    for(int i = 1 ; i < size ; i++)
    {
        ans   = ans ^ i;
    }
    return ans;
}
int main()
{
    int ar[5]= {1 ,2,3,4,4};
    cout<<find_duplicate(ar,5);

}