//wap to print the ansi table in c++
#include<iostream>
using namespace std;
int main()
{
    int i;
    for( i=1;i<=126;i++)
    {
        cout<<i<<"="<<(char)i<<'\n';
    }
return 0;
}