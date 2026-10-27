#include<iostream>
#include<string>
using namespace std;

string numalpha [8];

int main (){
    numalpha[0] = "B123";
    numalpha[1] = "C234";
    numalpha[2] = "A345";
    numalpha[3] = "C15";
    numalpha[4] = "B177";
    numalpha[5] = "G3003";
    numalpha[6] = "C235";
    numalpha[7] = "B179";
    int length = sizeof(numalpha) / sizeof(numalpha[0]) ;


    for (int i = 0; i < length; i++){
        if (numalpha[i][0] == 'B'){
            cout<< numalpha[i]<< endl;
        }
    }
        
     return 0;   
}
