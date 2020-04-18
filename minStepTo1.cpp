#include<iostream>
using namespace std;
// By Reccusrion

int minStepTo1(int n)
{
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	if(n<=1)
		return 0;
	z=minStepTo1(n-1);
	if(n%2==0)
		x=minStepTo1(n/2);
	if(n%3==0)
		y=minStepTo1(n/3);
	if(x<y && x<z)
		return 1+x;
	if(y<z)	
		return 1+y;
	else
		return 1+z;
	
	
}
int main()
{
	int n;
	cout<<"Enter a no"<<endl;
	cin>>n;
	cout<<"Required RES: "<<minStepTo1(n)<<endl;
}