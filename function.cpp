#include<iostream>
using namespace std;

    // function are set of code which perform something for you
    //functions are used to modularizecode 
    // functions are  used to increase readability
    // functions are used to use same code multiple time 
    // void : which doesnot store any value
    //return
//     void printname(string name){
//     cout<<"Namaste "<< name ;
// }
// int main(){
//     string name;
//     cin>>name;
//     printname(name)
// int sum(int num1, int num2){
//     int sum3 = num1 + num2;
//     return sum3;
// }
// int main(){
//     int n1, n2;
//     cin>>n1>>n2;
//     int n3 =sum(n1,n2);
//     cout<<n3;
int maxx(int num1, int num2) {
    if (num1 >= num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the corrected 'maxx' function to find the maximum
    int maximum = maxx(num1, num2);

    // Print the result to the console
    cout << "The maximum number is: " << maximum << endl;
    return 0 ;
}