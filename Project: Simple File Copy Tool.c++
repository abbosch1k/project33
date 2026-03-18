#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream src("input.txt");
    ofstream dst("output.txt");

    string line;

    while(getline(src,line))
        dst<<line<<endl;
}
