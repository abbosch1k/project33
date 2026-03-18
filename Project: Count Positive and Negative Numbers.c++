#include <iostream>
using namespace std;

int main(){
    int n,pos=0,neg=0,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=0) pos++;
        else neg++;
    }

    cout<<"Positive "<<pos<<" Negative "<<neg;
}
