#include<iostream>
using namespace std;
void sort_012(int arr[], int n) {
    int i,c1=0,c2=0,c3=0;
    for(int i = 0 ; i<n ; i++){
        // if(arr[i]==0)
        //     c1++;
        // if(arr[i]==1)
        //     c2++;
        // if(arr[i]==2)
        //     c3++;
        switch (arr[i])
        {
        case 0:
            c1++;
            break;
        case 1:
            c2++;
            break;
        case 2:
            c3++;
            break;
        }
    }
    cout<<c1<<" "<<c2<<" "<<c3<<endl;
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
        c2--;T
    }
    while (c3>0)
    {
        arr[i]=2;
        i++;
        c3--;
    }
    
}
int main()
{
    int arr[10]={0,2,2,2,2,0,2,1,1,2};
    sort_012(arr,10);

    for(int i = 0 ;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}