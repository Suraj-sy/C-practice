#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    (num%10==0 && num>50)?cout<<num:cout<<"false";
}