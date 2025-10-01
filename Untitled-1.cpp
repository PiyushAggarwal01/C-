#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1; i<=100; i= i+1){
        if(i%3==0 || i%5==0){
            continue;
        }
        cout<<i<<" ";
    }
}