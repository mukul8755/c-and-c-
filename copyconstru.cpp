// wap to use the copy constructor in the classes...
#include<iostream>
using namespace std;
class A {
    int a;
    public:
    void get_data(int n) {
        a=n;
    }
    void show() {
        cout<<"the number of a:"<<a<<endl;
    } 
};
int main()
{
    A c;
    c.get_data(12);

    c.show();
    A c1(c);
    c1.show();

return 0;
}