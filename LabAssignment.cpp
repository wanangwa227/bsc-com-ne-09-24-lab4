#include <iostream>
#include <string>
using namespace std;

int* age = new int;
string* name = new string;

int main (){
    cout << "Enter your age ";
    cin >> *age;
    cout << "what is your name? ";
    cin >> *name;
    cout << "you are " <<*name << " aged " << *age << endl;

}