#include <iostream>
using namespace std;

int main(){
    string user="admin", pass="1234";
    string u,p;

    for(int i=0;i<3;i++){
        cin>>u>>p;

        if(u==user && p==pass){
            cout<<"Success";
            return 0;
        }
    }

    cout<<"Blocked";
}
