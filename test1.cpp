#include<iostream>
using namespace std;
int main(){
	int a,b;
	float sum;
	cout<<"Input two integer: \n";
	cout<<"input a:";
	cin>>a;
	cout<<" \n input  b:";
	cin>>b;
	
	if(a>0&&b<1000000)
{
	sum= (float) (a+b)/2;			

	cout<<sum;
}
		else
	
	cout<<"N";
	
	return 0;
	
	
}
