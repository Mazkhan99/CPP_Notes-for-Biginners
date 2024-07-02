/*#include<iostream>
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
    Employee e;
    int no;
    FILE.open("Employee1",ios::ate|ios::in|ios::out|ios::binary);
    int num_object=FILE.tellep()/sizeof(e);
    cout<<"\n Enter the objects whose record has to be updated:";
    cin>>no;
    int loction=(no-1)*sizeof(e);
    FILE.seekg(location);
    cout<<"\n Enter the new details:-";
    e.read_data();
    FILE.write((char*)&e,sizeof(e));
    FILE.seekg(0);
    cout<<:"\n\n FILE UPDATED.......";
    for(int i=0;i<num_objects;i++)
    {
    	FILE.read((char*)&e,sizeof(e));
    	e.show_data();	
	}
    
}*/


//write a program to search a perticular record from a file.......
//write a program to delete a program from a file.......

#include<iostream>
#include<fstream>
using namespace std;
int main()

