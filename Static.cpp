#include<iostream>
using namespace std;

class demo
{
	public:
			int i;
			int j;
			static int k;
			
			demo()
			{
				cout<<"Inside Constructor"<<endl;
				i=0;
				j=0;
				//k=0;
			}
			
			void fun()
			{
				cout<<"Inside Fun"<<endl;
				cout<<this->i<<endl;
				cout<<this->j<<endl;
				cout<<this->k<<endl;	
				cout<<k<<endl;	
							
			}
			
			static void gun()
			{
				//cout<<this->i<<endl;
				//cout<<this->j<<endl;
				//cout<<this->k<<endl;
				cout<<"Inside gun"<<endl;
				cout<<k<<endl;	
			}

};
int demo::k=12;

int main()
{
	cout<<demo::k<<endl;	
	cout<<sizeof(demo)<<endl;	
	demo::gun();
	
	demo obj1;
	demo obj2;
	
	obj1.fun();
	//obj1.gun();
	demo::gun();
	obj1.k++;
	cout<<obj1.k<<endl;
	cout<<obj2.k<<endl;
	cout<<demo::k<<endl;	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	





