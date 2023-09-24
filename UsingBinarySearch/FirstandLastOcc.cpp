#include<iostream>
using namespace std;

int leftpos(int s,int e,int *arr,int key) {
    int ans = -1;
    
    int  mid = s + (e-s)/2;
    while(s<=e) {
        if(arr[mid] == key ) {
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }

        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
int rightpos(int s,int e,int *arr,int key) {
    int ans = -1;
    
    int  mid = s + (e-s)/2;
    while(s<=e) {
        if(arr[mid] == key ) {
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }

        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int main(){
    int Element ;
    cin>>Element;
    int *p = new int[8]{1,2,5,5,5,5,5,6};
    int s = 0;
    int e = 7;
    int  mid = s + (e-s)/2;

    cout<<mid<<endl;


    //for left part

    int left = leftpos(s,mid,p,Element);

    cout<<left<<endl;
     int right = rightpos(mid,e,p,Element);
     cout<<right<<endl;


    // for(int i = 0 ; i <8;i++)
    // {
    //     cout<<p+i<<" ";
    // }cout<<"\n";
    delete [] p;
    p = NULL;
    // for(int i = 0 ; i <8;i++)
    // {
    //     cout<<p[i]<<" ";
    // }

}