#include<iostream>
#include<list>
using namespace std;
void display ( list<int> &lst) {
	list<int> :: iterator it;
	for (it= lst.begin();it!=lst.end();it++) {
		cout<<*it<<" ";
	}
}
int main() {
	list<int> list1;
	list1.push_back(3);
	list1.push_back(6);
	list1.push_back(4);
	list1.push_back(9);
	list1.push_back(5);
	/*
	list <int> :: iterator  iter;
	iter = list1.begin();
	cout<<*iter<<" ";
	iter++;
	cout<<*iter<< " ";
	*/
	display(list1);
	//sorting the list
	cout<<endl<<"sorting the list:"<<endl;
	list1.sort();
	display(list1);
	
	//element deletion.
//	cout<<endl<<"after the element delete"<<endl;
	//list1.pop_back(); //this function delete the element in the end
//	list1.pop_front(); //this function delete the element in the starting
//	list1.remove(5); //this function delete the element do u want..
	//display(list1);
	
	//reverse the list ..
	list1.reverse();
	cout<<endl<<"reverse the list"<<endl;
	display(list1);
	
	return 0;
}
