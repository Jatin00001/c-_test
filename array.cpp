#include<iostream>
using namespace std;

void inputarr(int a[],int size)
{
    cout<<"enter array element ";
    for(int i = 0; i< size ; i++)
    {
        cin>>a[i];
    }
}
void printarr(int arr[], int size)
{ 
    cout<<"Printing an array "<<endl;
    for(int i=0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Finish printing "<<endl;

}

int main()
{
    int a[10];
    inputarr(a,10);
    printarr(a,10);

    return 0;
}