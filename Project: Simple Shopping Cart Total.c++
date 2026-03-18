#include <iostream>
using namespace std;

int main(){
    int n;
    double price,total=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>price;
        total+=price;
    }

    cout<<"Total: "<<total;
}
