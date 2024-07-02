// Suppose that examination is going on in a school there are 2 subjects science and math that are included part of exam there are few students in every section and few student have some marks so we need to copy marks of one of the student to another student for that create a class named Marks and Makes use of copy constructor to copy the makrs from 1 student to another 
/*#include<iostream>
using namespace std;
class Marks {
  private:
    int science;
    int math;

  public:
    Marks(int s, int m) {
      science = s;
      math = m;
    }

  public:
    Marks(const Marks &m) {
      science = m.science;
      math = m.math;
    }

  public:
    void display() {
      cout << "Science: " << science << endl;
      cout << "Math: " << math << endl;
    }
};

int main() {
  Marks E1(34, 56);
  Marks E2(E1);
  cout << "Marks of student 1:" << endl;
  E1.display();
  cout << "Marks of student 2:" << endl;
  E2.display();
  return 0;
}*/

//Suppose you are the class in charge of your class and the school
//has given you responsibility of sending results to the parents of the students
//the new students are enrolled in your class for this you will be requiring
//address details of the student like student name, father's name, house number, city 
//country and zip code of new student using constructor and appropriate member 
//function create a class for enterring the required address details of the student  

#include<iostream>
using namespace std;
class student{
class address {
  private:
    string studentName;
    string fatherName;
    string houseNumber;
    string city;
    string country;
    string zipCode;

  public:
    Address(string s, string f, string h, string c, string co, string z) {
      studentName = s;
      fatherName = f;
      houseNumber = h;
      city = c;
      country = co;
      zipCode = z;
    }

  public:
    void display() {
      cout << "Student Name: " << studentName << endl;
      cout << "Father's Name: " << fatherName << endl;
      cout << "House Number: " << houseNumber << endl;
      cout << "City: " << city << endl;
      cout << "Country: " << country << endl;
      cout << "Zip Code: " << zipCode << endl;
    }
};

int main() {
  Address a1("Maz", "Mohsin", "12A", "Lucknow", "India", "209868");
  cout << "Address Details:" << endl;
  a1.display();
  return 0;
}

};














