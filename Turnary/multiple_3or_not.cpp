#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    (num%3==0)?cout<<num:cout<<"fail";
}