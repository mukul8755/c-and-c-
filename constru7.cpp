#include<iostream>
using namespace std;
class bankDeposit {
    int rate,principal,time,interest,total;
    public:
    bankDeposit() {}
    bankDeposit(int p,int r,int t); 
    void show();      
};
bankDeposit ::bankDeposit(int p,int r,int t) {
    principal =p;
    rate =r;
    time =t;
    interest = p*rate*t/100;
    total=p+interest;
}





void bankDeposit :: show() {
    cout<<"your principal is = "<<principal<<endl;
    cout<<"your time is = "<<time<<" years"<<endl;
    cout<<"your rate is "<<Rate<<endl;
    cout<<"your interst is "<<interest<<endl;
    cout<<"your total amount is = "<<total<<endl;
}


int main()
{
    bankDeposit bd1,bd2;
    int p,r,t;
     cout<<"enter the principal,rate,time:"<<endl;
     cin>>p>>r>>t;

    bd1=bankDeposit(p,r,t);
    bd1.show();
   

    return 0;
}