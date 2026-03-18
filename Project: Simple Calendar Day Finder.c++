#include <iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    string days[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

    cout<<days[day%7];
}
