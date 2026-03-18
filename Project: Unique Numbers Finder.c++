#include <iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0;i<5;i++)
        cin>>arr[i];

    for(int i=0;i<5;i++){
        bool unique=true;

        for(int j=0;j<5;j++){
            if(i!=j && arr[i]==arr[j])
                unique=false;
        }

        if(unique)
            cout<<arr[i]<<" ";
    }
}
