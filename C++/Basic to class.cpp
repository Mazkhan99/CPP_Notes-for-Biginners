// write a program to convert distance km to meter km will be member of the class----

/*#include<iostream>
using namespace std;
class convert{
    float km;
    public:
    convert(float m){
        km=m/1000;
         cout<<"Km: "<<km;
    }
};
int main(){
    convert t(100);
    
}*/

//write a program to creata a class distance 

#include<iostream>
using namespace std;
class Distance1{
	float km;
	int m;
	public:
		Distance(float a,int b){
			km=a;
			m=b;
		}
		operator int()
		{
			return(m/1000);
			
		}
		operator float()
		{
			return (km*1000);
		}
};	
int main()
{
	int x;
	float y;
	cin>>x>>y;
	Distance1 d(y,x);
	x=d;
	cout<<x<endl;
	y=d;
	cout<<y<<endl;
}
	
