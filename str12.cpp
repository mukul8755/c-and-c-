//wap  to input a string count the digit in the string ...
#include<iostream>
using namespace std;
int main()
{
    char a[100];
    int i,count=0;
    cout<<"enter the string:"<<endl;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8'  || a[i]=='9' || a[i]=='0')
        {
            count++;
        }
    }
    cout<<"number of digit = "<<count<<endl;
}