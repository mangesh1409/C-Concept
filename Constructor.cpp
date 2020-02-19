#include<iostream>
#include<string.h>	// string.h included for memcpy()
using namespace std;

class base
{
	public:
		int *p;		// 	one pointer variable is declared...

		base()
		{
			cout<<"Inside Default constructor"<<endl;
			p = new int[10];	// 'p' is pointing to 40 bytes of memory which is dynamically allocated by new...
		}

		base(int i)
		{	
			cout<<"Inside Parametrised constructor with one parameter"<<endl;
			p = new int[i];		// the i/p argument times memory allocated and 'p' will point to that memory...
		}
	
		base(int i, int j, int k = 10)
		{	
			
			cout<<"Inside Parametrised constructor with default argument"<<endl;
			p = new int[i + k];		// i+k times the memory allocated and 'p' is pointing to that memory...
		}

		base(base &bref)
		{	
			cout<<"Inside copy constructor"<<endl;
			p = new int[40];
			memcpy(p,bref.p,40);	//	The  memcpy()  function  copies 40 bytes from memory 'bref.p' to memory 'p'...
		}
		~base()
		{
			cout<<"Inside Destructor"<<endl<<endl;
		}
};

int main()
{
	base obj1;			// 	default constructor is called...

	base obj2(obj1);		// 	copy constructor will get called...

	base obj3(10);		//	one-arg constructor will get called...

	base obj4(10,20);	//	the three-arg constructor gets called but 3rd argument will take default value...

	return 0;
}
