#include<bits/stdc++.h>
using namespace std;
template <class T>
class vecto {
	T* a_vec;
	int size;
	public:
		vecto (int n) {
			int ele;                                                        
			size = n;
			a_vec = new T[size];
			for (int i=0;i<size;i++) {
				cout<<"enter the number:"<<endl;
				cin>>;
	}
}
	
		void show() {
			for(int i=0;i<size;i++) {
				cout<<"\n\t"<<a_vec[i];
			}
		}
};
int main() {
	vecto<int> a(4);
	a.show();
	return 0;
}
