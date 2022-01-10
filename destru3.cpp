// to count the object in the constructor and destructor..

#include<iostream>
using namespace std;
int count = 0;
class box {
    public:
    box() {
         cout<<"I am constructor = "<<count<<endl;
         count++;
    }
    ~box() {
        cout<<"I am destructor = "<<count<<endl;
        count--;
    }
};
int main()
{
    box obj1,obj2,obj3,obj4;
    return 0;
}