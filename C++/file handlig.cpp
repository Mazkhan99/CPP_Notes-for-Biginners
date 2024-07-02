#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
main()
{
	char name[20];
	int rno;
	ifstream o;
	o.open("abc");
	cin>>name;
	cin>>rno;
	o <<rno;
	o.close();
}
