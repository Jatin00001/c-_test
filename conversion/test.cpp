#include<iostream>
using namespace std;
void print_array(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Printing done !";
}


int main()
{
    int ar[100] = {0};
    int m = 1;
    int i = 0;
    do{
        cin>>ar[i];
        i++;
        m++;
    }
    while(i<10);

    print_array(ar,m);

    return 0;
}