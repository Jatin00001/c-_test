#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<10;i++)
    {
        cout<<"before contiue -hey "<<i<<endl;
        cout<<"before contiue - hello "<<i<<endl;
        continue;
        cout<<"after contiue";
    }
}