#include<iostream>


using namespace std ;

int main()
{
    int row=3;
    int** array = new int* [row];

    for(int i = 0;i < row;i++) {
        array[i] = new int[row];
    }


    for(int i=0;i<row;i++)
    {
        for(int j = 0;j<row;j++)
        {
            cin>>array[i][j];
        }
    }


    for(int i=0;i<row;i++)
    {
        for(int j = 0;j<row;j++)
        {
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }

    for(int i = 0; i < row;i++) {
        delete[] array[i];
    }
    delete[] array;
    delete array;
    cout<<array<<endl;


    return 0;
}