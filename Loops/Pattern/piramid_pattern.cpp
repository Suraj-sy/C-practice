//print pramid with pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n*2-1;c++){
            if(c>=n+1-r && c<=n-1+r){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}