#include<bits/stdc++.h>
using namespace std;
template <class t>
class vector {
	vector<t> v1;
	int size;
	public:
		vector(int n) {
			size = n;
			t ele;
			for(int i=1;i<=size;i++) {
				cout<<"enter the element:"<<endl;
				cin>>ele;
				v1.push_back(ele);
				
			}
		}
		void show() {
			for(int i=0;i<size;i++) {
				cout<<v1[i]<<" ";
				
			}
			cout<<endl;
		}	
};
int main() {
	//vectr<int> v1(4);
	vector<float> v2(3);
	v2.show();
	return 0;
}
