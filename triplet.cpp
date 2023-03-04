#include<iostream>
using namespace std;

void Triplet(int arr[], int n,int sum) {
    for(int i=0;i<n;i++)
    {
        for(int j = i+1; j<n;j++)
        {
            for(int k = i+2;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<arr[i]<<" "<<arr[j]<<"  "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main()
{
    int triplet_sum;
    cout<<"Enter triplet sum ";
    cin>>triplet_sum;
    int arr[5] = {1,2,3,4,5};
    
    Triplet(arr,5,triplet_sum);


    return 0;
}