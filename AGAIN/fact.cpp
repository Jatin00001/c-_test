#include<iostream>

using namespace std;

int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    int a1 = a * fact(a-1);
    // cout<< a1 <<endl;
    return a1;
    
}
int fact1(int a){
    int fct = 1;
    for(int i=1;i<=a;i++){
        fct = fct*i;
        // cout<<fct<<" ";
        
    }
    return fct;
}
int cnr(int n,int r){
    // we use alternate fucntion but both are same !!!!!!!!!!!!!!!!!!!!1
    int cnr = fact1(n) / (fact(r)*fact(n-r));
    return cnr;
}
int main(){
    //find ncr
    int n=5,r=3;
    cout<<cnr(n,r)<<endl;
    return 0;
}