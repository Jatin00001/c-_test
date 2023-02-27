# include <iostream>
# include <climits>
using namespace std;

int setBits(int n)
{ 
	int ans  = 0;
	while (n!=0)
	{
		int bit = n & 1;
		if(bit == 1)
		{
			ans++;
		}
		n = n >>1 ;
	}
	return ans;
}
int main() 
{ 
	int n ;
	int m;
	cout<<"Enter First value" <<endl;
	cin>>m;
	cout<<"Enter Second value" <<endl;
	cin>>n ;
	// cout<<"Sets bits in "<< m <<" -  "<<setBits(m)<<endl;
	// cout<<"Sets bits in "<< n <<" -  "<<setBits(n)<<endl;
	cout<<"Total setbits in first and second is :- "<< setBits(m) + setBits(n)<<endl;
	
}