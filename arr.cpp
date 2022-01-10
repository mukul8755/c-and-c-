#include<iostream>
using namespace std;
int main() {
    int arr[5],i,temp;
    for(i=1;i<=5;i++) {
        cout<<"enter the "<<i<<" element of the array:"<<endl;
        cin>>arr[i];
    }
    cout<<"display the element of the array..."<<endl;
    for(i=1;i<=5;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"display the array element in reverse order..."<<endl;
    for(i=5;i>=1;i--) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"the array in the ascending order "<<endl;
    for(i=0;i<5;i++) {
        for (int j=i+1;j<5;j++) {
                if(arr[j]>arr[i]) 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }
    }
    for(i=1;i<=5;i++) {
        cout<<arr[i]<<"\t";
    }
    return 0;
}