#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string chars="abcABC123!@#";
    srand(time(0));

    for(int i=0;i<10;i++)
        cout<<chars[rand()%chars.size()];
}
