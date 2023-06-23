#include<iostream>
using namespace std;
void print(int *arr, int n)
{
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

bool is_Sorted(int *arr,int n,int& sum)
{
    cout<<"n is :- "<<n<<"    ";
    print(arr,n);
    cout<<endl;
    //base condition 
    if(n==0 || n==1)
    {
        return true;
    }
    sum += arr[0];
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        // cout<<arr[0]<<" ";
        is_Sorted(arr+1,n-1,sum);   
        // cout<<n<<" "; 
        print(arr,n);
        cout<<endl;
    }
}
int main()
{

    int a[10] = {1,2,3,4};
    int size = 4;
    int sum =0;
    if(is_Sorted(a,size,sum)){
        cout<<"Its sorted";
    }
    else
        cout<<"Not sorted array";


    cout<<endl<<sum<<endl;
    return 0;
}