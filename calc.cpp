#include <iostream>
using namespace std;

class calc
{
	int a,b,result;
	public:
		void addition(int a,int b);
		void substract(int a,int b);
		void multi(int a,int b);
		void division(int a,int b);
};
void calc::addition(int a,int b)
{
	result=a+b;
	cout<<"the addition ="<<result<<endl;
	
}

void calc::substract(int a,int b)
{
	result=a-b;
	cout<<"the substraction ="<<result<<endl;
}
void calc::multi(int a,int b)
{
	result=a*b;
	cout<<"the multiplication ="<<result<<endl;
}
void calc::division(int a,int b)
{
	result=a/b;
	cout<<"the division ="<<result<<endl;
}

int main()
{
	int a,b;
	int ch;
	calc ob;
         cout<<" enter the first number "<<endl;
         cin>>a;
         cout<<" enter the second number"<<endl;
         cin>>b;
	 while(1)
	 {
	 	cout<<"  *________YOUR CHOICES________*  "<<endl;
	 	cout<<"1  Addition "<<endl;
	 	cout<<"2 substraction "<<endl;
	 	cout<<" 3 multiplication "<<endl;
	 	cout<<" 4 division "<<endl;
	 	cout<<"*______________________*"<<endl;
	 	cout<<" enter your choice "<<endl;
	 	cin>>ch;
	 switch(ch)
	 {
	 	case 1:ob.addition(a,b);
	 	       break;
	 	case 2:ob.substract(a,b);
		       break;
		case 3:ob.multi(a,b);
		       break;	 
		case 4:ob.division(a,b);
		       break;	  
	    default:
	    	
		      exit;		             
		 }	
	 }
	
	
}
