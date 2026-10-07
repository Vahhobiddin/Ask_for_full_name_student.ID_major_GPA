#include <iostream>
using namespace std;
#include <string>
int main() {
    string name;
    int ID;
    string major;
    double GPA;
    cout<<"Enter your full name: "<<endl;
    getline(cin, name);
    cout<<"Enter your student ID: "<<endl;
    cin>>ID;
    cin.ignore();
    cout<<"Enter your major: "<<endl;
    getline(cin, major);
    cout<<"Enter your GPA: "<<endl;
    cin>>GPA;
    cout<<"------------------------------"<<endl;
    cout<<"    STUDENT INFORMATION"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Student ID: "<<ID<<endl;
    cout<<"Major: "<<major<<endl;
    cout<<"GPA: "<<GPA<<endl;
    cout<<"-----------------------------"<<endl;

    return 0;



}