#include<iostream>

using namespace std;

int main(){
    // craete an 2d array !
    int arr[3][4];

    //taking in/opt;
    // for(int i = 0; i<3; i++)
    // {
    //     for(int j = 0; j<4; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>>arr[j][i];
        }
    }
    cout<<endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}