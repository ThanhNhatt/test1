#include<iostream>
using namespace std;
int main()
{
	int n, i=2;
	float S=0;
	cout<<"nhap vao 1 so nguyen n:";
	cin>>n;
	while(n<=1){
		cout<<"N:";
		cout<<"\n Moi ban nhap lai:";
		cin>>n; 
	}
	float sum;
	do{
		for(int j=2;j<=n;j++){
			sum+= (float)j/(j+2);
			i++; 
		} 
	} 
	while(i<=n);
	cout<<"Tong bang:"<<sum;
	return 0; 
		
}
