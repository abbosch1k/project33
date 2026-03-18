#include <iostream>
using namespace std;

int main(){
    int choice;

    do{
        cout<<"1 Hello\n2 Bye\n0 Exit\n";
        cin>>choice;

        switch(choice){
            case 1: cout<<"Hello\n"; break;
            case 2: cout<<"Bye\n"; break;
        }

    }while(choice!=0);
}
