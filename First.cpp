#include<iostream>
using namespace std;

class Demo
{
	public:
			int i;
			int j;
			
			Demo()
			{
				cout<<"Inside Default Constructor\n";
			}
			
			Demo(int x,int y)
			{
					cout<<"Inside Parameterised Constructor\n";
					this->i=x;
					this->j=y;
			}
			~Demo()
			{
				cout<<"Inside Distructor\n";
			}
			
			void fun()
			{
					cout<<"Inside Fun\n";
			}
			
			void gun()
			{
				cout<<"Inside Gun\n";
			}
};

int main()
{
		cout<<"Inside Main Function\n";
		
		Demo obj1;
		Demo obj2(10,20);
		
		obj1.fun();
		obj1.gun();
		
		obj2.fun();
		obj2.gun();
		
		cout<<obj1.i<<"\n";
		cout<<obj1.j<<"\n";
		cout<<obj2.i<<"\n";
		cout<<obj2.j<<"\n";
								
		return 0;
}
