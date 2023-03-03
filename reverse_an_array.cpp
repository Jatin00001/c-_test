#include<iostream>
using namespace std;

void input(int arr[],int size)
{
    for(int i = 0 ;i<size; i++)
    {
        cin>>arr[i];
    }
}
void printarr(int arr[],int size)
{
    for(int i = 0 ; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    
}
int main()
{
    int array[10];
    input(array,10);

    printarr(array,10);cout<<endl;
    cout<<"Reverse array is : ";
    reverse(array,10);
    printarr(array,10);


    return 0;
}