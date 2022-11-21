#include<iostream>
using namespace std;
class ComplexNumber{
	double real;
	double imaginary;
public:
	void setReal(double re) {
		real = re;
	}
	void setImaginary(double im) {
		imaginary = im;
	}
	double getReal() {
		return real;
	}
	double getImaginary() {
			return imaginary;
	}
};
void Sum(ComplexNumber *n, ComplexNumber *m,ComplexNumber *l) {
	l->setReal(n->getReal() + m->getReal());
	l->setImaginary(n->getImaginary() + m->getImaginary());
}
void Product(ComplexNumber *n, ComplexNumber*m, ComplexNumber *l) {
	l->setReal(n->getReal() * m->getReal()-n->getImaginary() * m->getImaginary());
	l ->setImaginary(n->getReal() * m->getImaginary() + n->getImaginary() * m->getReal());
}
int main() {
	ComplexNumber* a, * b, *c, *d;
	a = new ComplexNumber();
	b = new ComplexNumber();
	c = new ComplexNumber();
	d = new ComplexNumber();
	a->setReal(5);
	a->setImaginary(10);
	b->setReal(4);
	b->setImaginary(1);
	Sum(a, b, c);
	Product(a, b, d);
	cout << c->getReal() << "+ i * " << c->getImaginary()<<"\n";
	cout << d->getReal() << "+ i * " << d->getImaginary() << "\n";
	Sum(a, c, c);
	cout << c->getReal() << "+ i * " << c->getImaginary() << "\n";
	Sum(b, c, c);
	cout << c->getReal() << "+ i * " << c->getImaginary() << "\n";
	Product(a, c, d);
	cout << d->getReal() << "+ i * " << d->getImaginary() << "\n";
	Product(b, c, d);
	cout << d->getReal() << "+ i * " << d->getImaginary() << "\n";
	Product(a, d, c);
	cout << c->getReal() << "+ i * " << c->getImaginary() << "\n";
	return 0;
}
//(a+bi)(c+di)=ac-bd+i(ad+bc)
/*
5,10
50,106
-810,530+500=1030
*/