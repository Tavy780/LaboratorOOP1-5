#include<iostream>
#include<string>
using namespace std;
class Student {
	int grade;
	string name;
public:
	void setGrade(int grade=0) {
		this->grade = grade;
	}
	void setName(string name) {
		this->name = name;
	}
	int getGrade() {
		return grade;
	}
	string getName() {
		return name;
	}
};
class StudentGroup {
private:
	int studentNumber;
	Student* List;
public:
	StudentGroup(int n) {
		studentNumber = n;
		List = new Student[studentNumber];
	}
	void maximumGrade(){
		int maximum=0;
		string name_max="John Doe";
		for(int i=0;i<=studentNumber;i++)
			if (maximum < List[i].getGrade()) {
				maximum = List[i].getGrade();
				name_max = List[i].getName();
			}
		cout << maximum << " " << name_max;
	}
	void read() {
		int grades;
		string names;
		for (int i = 0; i < studentNumber; i++) {
			cin >> grades >> names;
			List[i].setGrade(grades);
			List[i].setName(names);
		}
	}
};
int main() {
	StudentGroup* theList;
	theList	= new StudentGroup(3);
	theList->read();
	theList->maximumGrade();
	return 0;
}