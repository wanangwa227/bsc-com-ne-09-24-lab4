#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int daysuntilexpiration;
    srand(time(0));
    daysuntilexpiration = rand() % 12;
    if (daysuntilexpiration <= 10){
            if (daysuntilexpiration == 10){
                cout << "Your subscription will expire soon. Renew now!" << endl;
            } 
             else if (daysuntilexpiration <= 5){
             cout << "Your subscription expires in value of "<< daysuntilexpiration << " Renew now and save 10%!"<< endl;
             }
     
            else if (daysuntilexpiration == 1){
                cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            }
            else if (daysuntilexpiration == 0 ){
                cout << "Your subscription has expired." << endl;
            }
        }
        
    else {
        cout << "You have an active subscription." << endl;

    }
    
}