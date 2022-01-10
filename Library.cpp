#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Library {
	int no_of_book;
	string books[100];
	public:
		Library() {
			no_of_book = 0;
		}
		void addBook(string book) {
			this->books[no_of_book] = book;
			no_of_book++;
			cout<<book<<" has been added.."<<endl;
		}
		void showBook() {
			for(int i=0;i<no_of_book;i++) 
			{
				cout<<"* "<<books[i]<<endl;
			}
		}
		void issueBook(string book) {
			for(int i=0;i<no_of_book;i++) {
				if(books[i]==book) {
					cout<<"this book has been issued.."<<endl;
					books[i] = '\0';
					return;
				}
			}
		}
		void returnBook(string book) {
			addBook(book);
		}
		
};
int main() {
	Library l1;
	l1.addBook("C");
	l1.addBook("C++");
	l1.addBook("JAVA");
	l1.addBook("python");
	l1.showBook();
	l1.issueBook("C++");
	l1.showBook();
	l1.returnBook("C++");
	l1.showBook();
	return 0;
}
