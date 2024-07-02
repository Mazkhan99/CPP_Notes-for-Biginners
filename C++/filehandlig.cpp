#include<iostream>
#include<fstream>
using namespace std;

main(){
    ofstream ob;
    ob.open("abc.txt");
    int n;
    cin>>n;
    for(int i=1;i<11;i++)
    {
        ob<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
    ob.close();
    
    
    
   
}
