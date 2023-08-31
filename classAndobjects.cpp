#include<bits/stdc++.h>
// #include<string>
// #include<iostream>
using namespace std;

class starter{
    private:
        string name;

    public:
        char gender;
        int rollNumber;

        void setter(int regNo, string naam, char sex){
            name = naam;
            rollNumber = regNo;
            gender = sex;
        }
        void getter(){
            cout<<name<<endl;
        }
};
int main(){
    starter Mangi;
    Mangi.setter(20106058,"MangiLal",'M');
    Mangi.getter();
    cout<<Mangi.gender<<endl;
    cout<<Mangi.rollNumber<<endl;
    return 0;
}