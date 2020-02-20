#include<iostream>
using namespace std;

class demo
{
	public:
			int i,j;
			demo()
			{
				cout<<"Inside base constructor"<<endl;
			}
			
			virtual void fun()=0;
			void gun()
			{
				cout<<"Inside base gun"<<endl;
			}
			virtual void sun()
			{
				cout<<"Inside base sun"<<endl;
			}
			
			~demo()
			{
				cout<<"Inside base destructor"<<endl;
			}
};

class hello:public demo
{
	public:
			int x,y;
			hello()
			{
				cout<<"Inside derived  constructor"<<endl;
			}
			void fun()
			{
				cout<<"Inside derived fun"<<endl;
			}
			void sun()
			{
				cout<<"Inside derived sun"<<endl;
			}
			void gun()
			{
				cout<<"Inside detived gun"<<endl;
			}
			virtual  void mun()
			{
				cout<<"Inside derived mun"<<endl;
			}
			
			~hello()
			{
				cout<<"Inside derived destructor"<<endl;
			}
};

int main()
{
	//demo dobj;		// not allowed

	demo *p=NULL;		//we can create pointer of class that contain Abstract function or Pure virtual function
	hello hobj;
	p=&hobj;
	
	p->fun();
	p->gun();
	p->sun();
	//p->mun();
	
	hobj.mun();

	return 0;
}
