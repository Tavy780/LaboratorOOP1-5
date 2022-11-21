#include <iostream>
using namespace std;
class Form {
private:
	string color;
protected:
	string name;
	void setColor(string color) {
		this->color = color;
	}
public:
	Form() {
		cout << "Default Form constructed.\n";
	}
	Form(string name) {
		cout << "Parametric Form constructed.\n";
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	~Form() {
		cout << "Form destroyed.\n";
	}

};
class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	Rectangle() {
		cout << "Default Rectangle constructed.\n";
	}
	Rectangle(string name, int width, int height):Form(name)  {
		// call :Form(name){ can miss
		cout << "Parametric Rectangle constructed.\n";
		this->width = width;
		this->height = height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	~Rectangle() {
		cout << "Rectangle destroyed.\n";
	}
};
int main()
{
	Form f1;
	Form f2("forma");
	cout << "forma: " << f2.getName() << endl;
	Rectangle r1;
	Rectangle r2("rectangle 1", 1, 2);
	cout << "rectangle name: " << r2.getName() << " width:" << r2.getWidth() << endl;
	return 0;
}
/*
Default Form constructed.
Parametric Form constructed.
forma: forma
Default Form constructed.
Default Rectangle constructed.
Parametric Form constructed.
Parametric Rectangle constructed.
rectangle name: rectangle 1 width:1
Rectangle destroyed.
Form destroyed.
Rectangle destroyed.
Form destroyed.
Form destroyed.
Form destroyed.
*/