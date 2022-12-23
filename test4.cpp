#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,h;
char c;
while(h!=5)
{

	cout<<" ======================= \n";
	cout<<" *        MENU         * \n";
	cout<<" *                     * \n";
	cout<<" *    1.ADD            * \n";
    cout<<" *    2.Subtract       * \n";
	cout<<" *    3.Multiply       * \n";
	cout<<" *    4.Divide         * \n";
	cout<<" *    5.Modulus        * \n";
	cout<<" * ===================== \n";
	
	
		cout<<"Enter Your Choose(1-5): ";
	cin>>h;
	while(h<1||h>5)
	{
	
	cout<<"Enter again number:";
	cin>>h;
}
	switch(h)
	{
		
		
	case 1:
		cout<<"input 2 number:";
		cin>>a>>b;
     	cout<<" Result "<<a+b<<"\n";
     	
	cout<<"press y or Y to continue:";
	cin>>c;
	if(c=='y' || c=='Y' ){
		cout<<"enter your choice";
		cin>>h;
	}
	else
	exit(h);
	
             break;
	  
	case 2:
	  	
	  	cout<<"input 2 number: \n";
		cin>>a>>b;
		cout<<"Result  "<<"\n"<<a-b<<"\n";
			cout<<"press y or Y to continue:";
	cin>>c;
	if(c=='y' || c=='Y' ){
		cout<<"enter your choice";
		cin>>h;
	}
	else
	exit(h);
	
             break;
	case 3:
		  
		cout<<"input 2 number: \n";
		cin>>a>>b;
		cout<<"Result  "<<"\n"<<a*b<<"\n";
			cout<<"press y or Y to continue:";
	cin>>c;
	if(c=='y' || c=='Y' ){
		cout<<"enter your choice";
		cin>>h;
	}
	else
	exit(h);
              break;	
	case 4:
	
		cout<<"input 2 number: \n";
		cin>>a>>b;
		
		cout<<"Result "<<"\n"<<(float) a/b<<"\n";
			cout<<"press y or Y to continue:";
	cin>>c;
	if(c=='y' || c=='Y' ){
		cout<<"enter your choice";
		cin>>h;
	}
	else
	exit(h);
		
              break;		
 		       	
	case 5:
		cout<<"input 2 number: \n";
		cin>>a>>b;
		cout<<"Result: "<< (double) (a%b)<<"\n";
			cout<<"press y or Y to continue:";
	cin>>c;
	if(c=='y' || c=='Y' ){
		cout<<"enter your choice";
		cin>>h;
	}
	else
	exit(h);
	           break;
	           
    return 0; 
	exit(h);
	       }
	   }
	 return 0;
	
}
		
		
		
              		
		
		
	
