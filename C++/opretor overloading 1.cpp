//         write a program to overload not using postfix prefix---

/*#include<iostream>
using namespace std;
class overloading{
	int x,y;
	public:
		overloading(int a, int b)
		{
			x=a;
			y=b;
			
		}
		void print()
		{
			cout<<x<<" "<<y;
			
		}
		void operator !()
		{
			x=!x;
			y!=y;
			
		}
		
};
int main()
{
	overloading o(3,5);
	o.print();
	!o; //o.opretor !();
	o.print();
}*/


//              prefix ++ , Prefix --

/*#include<iostream>
using namespace std;
class overloading{
	int x,y;
	public:
		overloading(int a, int b)
		{
			x=a;
			y=b;
			
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
			
		}
		void operator ++()
		{
			x=++x;
			y=++y;
			
		}
		void operator --()
		{
			x=--x;
			y=--y;
			
		}
		
};
int main()
{
	overloading o(3,0);
	o.print();
	++o; //o.opretor !();
	o.print();
	--o; //o.opretor !();
	o.print();
}*/


//                          postfix ++ , Prefix --

/*#include<iostream>
using namespace std;
class overloading{
	int x,y;
	public:
		overloading(int a, int b)
		{
			x=a;
			y=b;
			
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
			
		}
		void operator ++(int)
		{
			x=x++;
			y=y++;
			
		}
		void operator --(int)
		{
			x=x--;
			y=y--;
			
		}
		
};
int main()
{
	overloading o(3,5);
	o.print();
	o++; //o.opretor !();
	o.print();
	o--; //o.opretor !();
	o.print();
}*/


//                      write a  program of overloading prefix and postfix using friend function----


/*#include<iostream>
using namespace std;
class overloading{
	int x,y;
	public:
		overloading(int a, int b)
		{
			x=a;
			y=b;
			
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
			
		}
		friend void operator ++(overloading &ob);
		friend void operator --(overloading &ob);
	
};
	void operator ++(overloading  &ob)
		{
			ob.x= ++ob.x;
			ob.y= ++ob.y+2;
			
		}
	void operator --(overloading  &ob)
		{
			ob.x= --ob.x;
			ob.y= --ob.y;
			
		}
		
		
int main()
{
	overloading o(3,0);
	o.print();
	++o; //o.opretor !();
	o.print();
	--o; //o.opretor !();
	o.print();
}*/

//

//write a program to overload all the opretors
#include<iostream>
using namespace std;
class overload{
	int a;
	int b;
	sum()
	{
		b=50;
	}
	void set_data()
	{
		cout<<"enter a:";
		cin>>a;
	}
	int operator+(sum s1)
	{
		return(a+s1.b);
	}
	
};

















