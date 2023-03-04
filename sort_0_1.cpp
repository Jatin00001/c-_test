#include<iostream>
using namespace std;

void sort_01(int arr[],int n)
{
    int i = 0;
    int j = n-1;
    // while(i<j)
    // {
    //     if(arr[i]==0)
    //         i++;
    //     if(arr[j]==1)
    //     {
    //         j--;
    //     }
    //     if(i<j )
    //     {
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    // }
    int c1 = 0;
    int c2=0;
    while(i<=j)
    {
        if(arr[i]==0){
            c1 += 1;
        }
        if(arr[i]==1){
            c2++;
        }
        i++;
    }
            cout<<c1<<" "<<endl;
            cout<<c2<<endl;
    

    i = 0;
    while (c1>0)
    {
        arr[i]=0;
        i++;
        c1--;
    }
    while (c2>0)
    {
        arr[i]=1;
        i++;
        c2--;
    }
    
}
int main()
{

    int arr[10]={0,1,0,0,1,0,1,1,1,1};
    sort_01(arr,10);

    for(int i = 0 ;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}