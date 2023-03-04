#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid  = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{
            e  = mid ;
        }
        mid  = s + (e-s)/2;
    }
    return arr[mid];

}

int main()
{
    int arr[10] = {1,2,3,4,5,10,11,8,7,6};

    cout<<"Peak element is "<<peakElement(arr,10);



    return 0;
}