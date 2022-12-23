/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int age;
    int H;
    int head;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> H;
            if(H < 100){
                character = "Chopper";
            }else if(H<180){
                character = "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> head;
                if(head>1100000000){
                    character = "Zoro";
                }else{
                    character = "Sanji";
                    }
     
            }

    }else if(age>26 and age<=60){
        cout << "Enter your bounty: ";
        cin >> head;
        if(head>500000000){
            character = "Jinbe";
        }else{ 
            character = "Franky";}
    }else{
        character = "Brook";
    }

    
cout << "Your character = " << character;
return 0;
}
