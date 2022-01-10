#include<bits/stdc++.h>
using namespace std;
void display(list<int> &lst) {
    list<int> :: iterator it;
    for(it = lst.begin();it!=lst.end() ;it++) {
            cout<<*it<<" ";
    }
    cout<<endl;
}
int main() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    list<int> :: iterator iter = l1.begin();
   display(l1);
   
}