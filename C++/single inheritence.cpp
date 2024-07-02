#include<iostream>
using namespace std;
class student{
    int r_no;
    protected:
    int section;
    public :
    void getdata(int a,int b){
        r_no=a;
        section =b;}
        };
        class teacher1:public  student {
            char name[20];
            };
            void display (student s)
            {
                cout<<"Roll no is "<<s.r_no<<endl;
                cout <<"Section of the Student"<<s.section << endl ;
                }
                int main()
                {
                    teacher t;
                    t.getdata();
                    }

        


