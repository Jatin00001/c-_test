#include<iostream>
// #include<algorithm>
using namespace std;
void print(int *a,int s,int e)
{
    for(int i = s;i<=e;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int partition(int *a , int s ,int e)
{      
    int pivot = a[s];
    // cout<<"pivot   : -  "<<pivot<<endl;
    // print(a,s,e);
    int cnt = 0;
    for(int i = s+1;i<=e;i++)
    {
        if(a[i]<=pivot)
            cnt++;
    }

    //sahi jaga pr daalna h element ko!

    int pivotindex = s+cnt;
    swap(a[pivotindex],a[s]);

    // check krna h left and right part ko !

    int i=s,j=e;
    // cout<<endl;
    while (i < pivotindex && j > pivotindex)
    {
       
        while(a[i] < pivot)
        {
            i++;
        }
  
        while(a[j] > pivot )
        {
            j--;
        }
      
        if(i<pivotindex && j>pivotindex)
        {
            swap(a[i++],a[j--]);
        }
    }
        // print(a,s,e);
        // cout<<endl;
    

    return pivotindex;

}

int quicksort(int *a,int s,int e)
{
    // base case 
    if(s>=e)
        return 0;
    
    //partition krna h ab ek ko pivot maan kr
    // print(a,s,e);
    
    int p = partition(a,s,e);

    //left vala sort krdo
    quicksort(a,s,p-1);

    //right vala sort kr do

    quicksort(a,p+1,e);
}

int main()
{
    int arr[10] = {5,4,3,2,1,50,56,3,5,35};

    int n = 10;
    quicksort(arr,0,n-1);


    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}