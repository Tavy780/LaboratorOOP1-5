#include<iostream>
using namespace std;
class Rectangle {
	private:
		int length;
		int width;
	public:
		Rectangle(int l, int w) {
			length=l;
		    width=w;
		}
		long long Perimeter() {
			return  2 * (length + width);
		}
		long long Area () {
			return length * width;
		}

};
int main() {
	Rectangle Rec1(20, 40);
	Rectangle Rec2(50, 50);
	if (Rec1.Perimeter() > Rec2.Perimeter())
		cout << "The perimeter of the first rectangle is larger then the second rectangle's perimeter.\n";
	else
		cout << "The perimeter of the second rectangle is larger then the first rectangle's perimeter.\n";
	if (Rec1.Area() > Rec2.Area())
		cout << "The area of the first rectangle is larger then the second rectangle's area.\n";
	else
		cout << "The area of the second rectangle is larger then the first rectangle's area.\n";
	return 0;
}