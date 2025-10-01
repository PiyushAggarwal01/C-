#include <iostream>
using namespace std;

int main() {
    // if the age is 18 above you can vote otherwise not
    // int age;
    // cin >> age;

    // if (age >= 18) {
    //     cout << "Yes, you can vote";
    // } 
    // else {
    //     cout << "No, you are not eligible";
    // }
    /* w ap to grade a student according to their marks */
    int  marks;
    cout<<"enter your marks :";
    cin>>marks;
    if (marks <= 60){
        cout<<"D";
    }
    else if  (marks > 60 && marks <=75){
        cout<<"c";
    }
    else if(marks > 75 && marks <=89){
        cout<<"B";
    }
    else if (marks >=90){
        cout<<"A";
    }
    else{
        cout<<"something went wrong";
    }
    return 0;   
}