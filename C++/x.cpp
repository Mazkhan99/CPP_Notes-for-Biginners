include<iostream>
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
}