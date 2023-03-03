#include<bits\stdc++.h>
using namespace std;


void  intersection(int a1[],int a,int b1[],int b)
{
    int i = 0; //1 2 3 4 5
    int j =0; // 4 5
    while (i<a && j<b)
    {
        if(a1[i]==b1[j]){
            cout<<a1[i]<<" ";
            i++;
            j++;
        }
        else if(a1[i]<b1[j])
        {
            i++;
        }
        else if(a1[i]>b1[j] ){
            j++;
        }

    }
    
}
int main() {
    int a1[6]={1,2,3,4,5,6};
    int a2[2]={4,5};
    intersection(a1,6,a2,2);



    return 0;
}