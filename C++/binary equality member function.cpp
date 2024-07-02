/*BINARY OVERLOADING OPERATOR...................*/ 
// #include<iostream>
// using namespace std;
// class rel
// {
//     int x;
//     int y;
//     public:
//     rel(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void operator < (rel ob)
//     {
//         if(x>ob.x && y>ob.y)
//         cout<<x<<y<<endl;
//         else
//         cout<<ob.x<<ob.y;
//     }
//     void operator >= (rel ob)
//     {

//     }
//     void operator == (rel ob);
// };
// void rel :: operator ==(rel ob)
// {
//     if(x==ob.x)
//     cout<<"equal";
// }
// main(){
//     rel o1(2,3),o2(4,5);
//     o1<o2;
//     o1>=o2;
//     o1==o2;
// }


// binary overloading operator using friend function,,,,,,,,,,,,,


// #include<iostream>
// using namespace std;
// class rel
// {
//     int x;
//     int y;
//     public:
//     rel(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     friend void operator <(rel, rel);
//     friend void operator >=(rel, rel);
//     friend void operator ==(rel, rel);
// };
// void operator < (rel ob,rel obj)
// {
//     if(ob.x>obj.x)
//     cout<<ob.x;
// }
// void operator >= (rel ob,rel obj)
// {
//     if(ob.x<=obj.x)
//     cout<<obj.x;
// }
// void operator == (rel ob,rel obj)
// {
//     if(ob.x==obj.x)
//     cout<<"equal";
// }
// main(){
//     rel o1(2,3),o2(4,5);
//     o1<o2; //operatior <(o1,o2);
//     o1>=o2;
//     o1==o2;
// }


/*#include<iostream>
using namespace std;
class complex
{
    int x, y;
public:
    complex() {
        
    }
    complex(int a, int b) {
        x = a;
        y = b;
    }

    void print() {
        cout << x << " +i" << y << endl;
    }

    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2) {
    complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

int main() {
    complex c1(3, 4), c2(2, 5), c3;
    c3 = c1 + c2;  
    c3.print();
    return 0;
}*/



