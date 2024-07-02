// SEEK program----------

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int pos;
	fstream outfile;
	outfile.open("Message.txt",ios::out);
	outfile<<"WELCOME";
	cout<<"\n The current position of write pointer is: ";
	cout<<outfile.tellp();
	cout<<"\n Enter the position to move: ";
	cin>>pos;
	outfile.seekg(pos,ios::beg);
	cout<<"\n The position of Get pointer is: ";
	cout<<outfile.tellg()<<endl;
	cout<<"\n Enter the position to move from current position: ";
	cin>>pos;
	outfile.seekg(pos,ios::cur);
	cout<<"\n The position of Get pointer is: ";
	cout<<outfile.tellg()<<endl;
	cout<<"\n Enter the position to move from end: ";
	cin>>pos;
	outfile.seekg(-pos,ios::end);
	cout<<"\n The position of Get pointer is: ";
	cout<<outfile.tellg()<<endl;
	cout<<outfile.tellp()<<endl;
	return 0;
}*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int marks[]={98,67,89,100,45,65,51,78,12,43};
	int arr[10]={0};
	fstream FILE;
	FILE.open("temp",ios::out|ios::binary);
	FILE.write((char*)marks,sizeof(marks));
	FILE.close();
	FILE>open("temp",ios::in|ios::binary);
	FILE.read((char *)arr,sizeof(arr));
	cout<<"\n Marks obtained:";
	for(int i=0;i<10;i++)
	cout<<"\t"<<arr[i];
	FILE.close();
	
}*/


#include<iostream>
#include<fstream>
using namespace std;

class Employee{
    private:
    int emp_code;
    char name[20];
    int hra;
    int da;
    int ta;
    public:
    void read_data(){
        cout<<"\n\n Enter the employee code: ";
        cin>>emp_code;
        cout<<"\n\n Enter the name f the employee: ";
        cin>>name;
        cout<<"\n\n Enter the HRA,DA and TA: ";
        cin>>hra>>da>>ta;
    }
    void show_data(){
        cout<<"\n\n EMP CODE: "<<emp_code;
        cout<<"\n\n NAME: "<<name;
        cout<<"\n\n HRA,DA and TA: "<<hra<<"\t"<<da<<"\t"<<ta;
              
    }
};
int main(){
    fstream FILE;
    Employee e[3],d[3];
    int i;
    FILE.open("Employee1",ios::out|ios::binary);
    cout<<"\n Enter the details of three employee";
    cout<<"\n-------------------------------------";
    for(int i=0;i<3;i++){
        e[i].read_data();
        FILE.write((char *)&e[i],sizeof(e[i]));
    }
    FILE.close();
    FILE.open("Employee1",ios::in|ios::binary);
    for(int i=0;i<3;i++){
        FILE.read((char *)&e[i],sizeof(d[i]));
        d[i].show_data();

    }
    FILE.close();
    return 0;


}

//write a program to merge one file to another------


