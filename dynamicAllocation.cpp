#include<bits/stdc++.h>
// #include<string>
// #include<iostream>
using namespace std;

class student{
    private:
        string name;

    public:
        char gender;
        int rollNumber;

        void setName(string naam){
            name = naam;
        }
        void getName(){
            cout<<name<<endl;
        }
};
int main(){
    student *A1 = new student;
    A1->setName("Ankit");
    A1->getName();
    A1->gender = 'M';
    cout<<(*A1).gender;
    return 0;
}