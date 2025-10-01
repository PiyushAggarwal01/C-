#include<iostream>
using namespace std;
// pass by value
int dosomething(int num){
    cout<<num<<endl;
    num +=num;
    cout<<num<<endl;
    num +=num;
    cout<<num<<endl;

}
int main(){
    int n;
    cin>>n;
    int j = dosomething(n);
    cout<<n<<endl;
    return 0;
}