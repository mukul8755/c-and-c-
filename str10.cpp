//wap to count the vowel in the string ...
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int count=0;
    int i;
    cout<<"enter your string:"<<endl;
    gets(a);
    for (i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'  || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            count++;
        }
    }
    cout<<"number of vowel = "<<count<<endl;
}
