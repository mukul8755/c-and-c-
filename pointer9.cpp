#include<iostream>
using namespace std;

class point {
	double a,b;
	public:
		void set(double m,double n) {
			a=m;
			b=n;
		}
		double sum(point obj);
};
double point :: sum(point obj) {
	double point :: *ptra = & point ::a;
	double point :: *ptrb = &point ::b;
	point *pobj = *obj;
	doublue sum = objp.*ptra + pobjp->*ptrb;
	return sum;
}


int main() {
	
	point obj2;
	void (point ::*ptrf) (double,double) = &point ::set;
	(obj2.*ptrf) (100,200);
	
	}
	return 0;
}
