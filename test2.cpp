#include <iostream>
using namespace std;



int main() {
	int n, temp;
   cout<<"Enter Total Number of Calls Made: ";
   cin>>n;
   if(n<=0)
      cout<<"\nNo charge!";
   else
   {
   	if(n<=50 ){
   	temp=200000+n*7000;
     cout<<n<<" phut = "<<temp;
    }
    else if( n>50 && n<=150)
    {
    	temp=200000+50*7000+(n-50)*500;
    	cout<<n<<" phut = "<<temp;
	}
	else if (n>=200)
	{
		temp=200000+50*7000+150*500+200*(n-200);
    	cout<<n<<" phut = "<<temp;
	}
}
	return 0;
}
