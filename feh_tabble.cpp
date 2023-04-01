#include<iostream>

using namespace std;
void feh(int f)
{
    int c;
    int f1 = 0;
    cout<<"f "<<" c "<<endl;
    while (f1<=f)
    {
        c = (5*(f1-32))/9;
        cout<<f1<<"  "<<c<<endl;
        f1 +=20;
    }
    return;
    
}
int main()
{
    feh(30);


    return 0;
}