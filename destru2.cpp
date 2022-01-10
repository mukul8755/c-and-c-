#include<iostream>
using namespace std;
class box {
    public:
    box() {
        cout<<"i am a constructor:"<<endl;
    }
    ~box() {
        cout<<"i am a  destructor"<<endl;
    }
};


int main()
{ 
    box bd1;
return 0;
}