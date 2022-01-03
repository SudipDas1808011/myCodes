#include<iostream>
using namespace std;

int main(){

    string ar="h0r0";
    char temp;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }

    }
    cout<< ar;
}
