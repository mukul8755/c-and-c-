#include<iostream>
#include <climits> // Definition of INT_MIN, ...
using namespace std;
int main()
{
int a;
cout << "Range of types int and unsigned int "<< endl;
cout<<"size of integer in the byte"<<sizeof(a)<<endl;
cout << "int " << FLOAT_MIN <<"  to  "<< FLOAT_MAX << endl;
cout << "unsigned int " << " 0   to   "<< UINT_MAX << endl;
return 0;
}
