#include<bits/stdc++.h>
using namespace std;
int main(){
    // wAP for switch case 
    int days;
    cout<<"enter a number between 1 to 7 , for finding a day :";
    cin>>days;
    switch(days){
        case 1 :
            cout<<"MOnday";
            break;
        case 2 :  
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4 :
        cout<<"Thrusday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid number";
            

    }
    return 0;

}