#include<iostream>
using namespace std;
void merge(int *a,int s,int e)
{
    int mid  =  s + ( e - s)/2;
    int len1 = mid - s + 1 ;
    int len2 = e-mid;

    int *First = new int[len1];
    int *second = new int[len2];

    // for copy array
    int mia = s;
    for(int i = 0;i<len1;i++)
    {
        First[i]= a[mia++];
    }
    mia = mid + 1;
    for(int i = 0 ; i<len2; i++)
    {
        second[i] = a[mia++];
    }

    // Merge 2 sorted array

    int index1 = 0,index2 = 0;
    mia=s;

    while(index1<len1 && index2<len2)
    {
        if(First[index1]<second[index2]){
            a[mia++] = First[index1++];
        }
        else{
            a[mia++] = second[index2++];
        }
    }
    while (index1<len1)
    {
        a[mia++] = First[index1++];
    }
    while (index2<len2)
    {
        a[mia++] = second[index2++];
    }
    
    delete []First;
    delete []second;


}

void mergesort(int *a,int s,int e)
{
    //base case
    if(s>=e)
        return;

    int mid = s + (e-s)/2;

    // left side
    mergesort(a,s,mid);

    //right side

    mergesort(a,mid+1,e);

    //merge 2 sorted array

    merge(a,s,e);
}

int main()
{
    int arr[5] = {5,4,6,2,1};

    int size  = 5;

    mergesort(arr,0,size-1);

    for(int i = 0 ; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}