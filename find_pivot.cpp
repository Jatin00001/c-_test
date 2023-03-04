#include<iostream>
using namespace std;

int isPivot(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }


        mid = s + (e-s)/2;
    }

    return s;
    
}

int binary(int arr[],int start,int end,int key)
{
    int s = start;
    int e  = end;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            s = mid +1;
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;   

}


int main()
{
    int arr[5]={7,8,1,2,3};
    int target = 3;
    int piv = isPivot(arr,5);
    cout<<piv<<endl;
    if(arr[piv] <= target && target<=arr[4]){
        cout<<binary(arr,piv,4,target)<<endl;
    }
    else{
        cout<<binary(arr,0,piv,target)<<endl;
    }


    return 0;
}