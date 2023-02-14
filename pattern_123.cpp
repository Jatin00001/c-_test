#include<iostream>
using namespace std;

int main()
{
    int row,col; 
    cout<<"enter row and col \n";
    cin>>row>>col;
    int i= 1;
    if(row==0 || col == 0)
    {
        cout<<"row is :- "<<row<<"\ncol is :- "<<col<<endl;
        
    }
    // for 1 2 3 pattern
    // while (i<=row)
    // {
    //     int j = 1;
    //     while (j<=col)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
        
    // }

    // for(int i=1;i<=row;i++)
    // {
    //     for(int j = 1; j<=col ;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
  


// for reverse pattern
for(int i = 1; i<row;i++)
{
    for(int j = 1; j<=col; j++)
    {
        cout<<row-j+1<<" ";
    }
    cout<<endl;

}



  return 0;
}
