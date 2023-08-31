#include<bits/stdc++.h>
using namespace std;
class construct{
    private:

    public:
        int value;
        string name;

        construct(){
            cout<<"constructor called"<<endl;
        }
        construct(string nam){
            name = nam;
            cout<<"Name updated"<<endl;
        }
};
int main(){
    string naam = "Nayraa";
    construct c1;
    construct c2(naam);
    cout<<c2.name<<endl;

    return 0;
}