#include<iostream>
using namespace std;

int main()
{
    int* i2 = new int[5];
    for(int i = 0; i<5; i++)
    {
        cin>> i2[i];
    }
    for(int i = 0; i<5; i++)
    {
        cout<< i2[i]<<" ";
    }


    return 0;
}