#include<iostream>
using namespace std;
int main() {
    int a[10],n,i;
    system("cls");
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(i=0;n>0;i++) {
        a[i] = n%2;
        n=n/2;
    }
    cout<<"given number is in binary = "<<endl;
    for(i=i-1;i>=0;i--) {
        cout<<a[i];
    }
    cout<<endl;
    
    return 0;
}