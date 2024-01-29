#include<iostream>
using namespace std;

int main(){
    int f = 0;
    cout<<"F  "<<" "<<"C "<<endl;
    while(f<=300){
        int c = 5*(f-32) /9;
        cout<<f<<" "<<c<<endl;
        f +=20;
    }
}