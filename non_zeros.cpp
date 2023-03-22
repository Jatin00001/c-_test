#include<iostream>

using namespace std;
void print
(int arr[],int n1)
{
    for(int n =0; n<n1; n++)
    {
        cout<<" "<<arr[n];
    }cout<<" <--> Print completed !"<<endl;
}
void moveAll_zeros(int arr[],int n)
{
    int nonzeros = 0;

    for(auto j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j],arr[nonzeros++]);
        }
    }
}
int main()
{

    int arr[6] = {0,0,0,0,1,2};
    moveAll_zeros(arr,6);
    print(arr,6);

    return 0;
}