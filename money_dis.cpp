# include <iostream>
# include <conio.h>
using namespace std;
int main() 
{ 
 int n; cout<<"Enter amount "<<endl;
 cin>>n;
 int a=1,x=100,y=50,z=20;
 while (n!=0)
 {
	int ans =0;

	if(n>=x)
	{
		ans = n/x;
		cout<<"100 ruppe will be "<<ans<<endl;
		n = n - (ans*x);
	}
	if(n>=y)
	{
		ans = n/y;
		cout<<"50 ruppe will be "<<ans<<endl;
		n = n - (ans*y);
	}
	if(n>=z)
	{
		ans = n/z;
		cout<<"20 ruppe will be "<<ans<<endl;
		n = n - (ans*z);
	}
	if(n>=a)
	{
		ans = n/a;
		cout<<"1 ruppe will be "<<ans;
		n = n - (ans*a);
	}
	
 }
 return 0;
}