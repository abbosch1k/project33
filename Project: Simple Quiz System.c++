#include <iostream>
using namespace std;

int main(){
    int score=0;
    int ans;

    cout<<"2+2=? ";
    cin>>ans;
    if(ans==4) score++;

    cout<<"5*2=? ";
    cin>>ans;
    if(ans==10) score++;

    cout<<"Score: "<<score;
}
