#include<iostream>
#include<String>
using namespace std;

class GU{
    
    public:
    // GU(){
    //     cout<<"Hello, Iam Adarsh";

    // }
    string name;
    string dept;
    string subject;
    double salary;

    GU(string n, string d, string g, double sal){
        name=n;
        dept = d;
        subject = g;
        salary = sal;
    }
    GU(GU &obj){
        cout<<"This is custom copy constructor"<<endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
    
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Dept:"<<dept<<endl;
    }
    
};
class person : GU{
    public:
    int age;
    

};
int main(){
    GU g1("Adarsh","Computer science","python",56000);
    GU g2(g1);
    g2.getinfo();
}



