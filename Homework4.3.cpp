#include<iostream>
#include<list>
#include<string>
using namespace std;
class Student {
	int grade;
	string name;
public:
	Student(int g,string na) {
		grade = g;
		name = na;
	}
	void setGrade(int grade=0) {
		this->grade = grade;
	}
	void setName(string name="Joe Biden") {
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
	list<Student> List;
public:
	void addStudent(Student Stud) {
		List.push_back(Stud);
	}
	list<Student> getList() {
		return this->List;
	}
	void firstStudequalTo5() {
		bool nope = true;
		list<Student>::iterator it;
	    for (it = List.begin(); it != List.end(); it++) {
		  	    if ((*it).getGrade() == 5) {
		     		cout << (*it).getGrade() << " " << (*it).getName();
		    		nope = false;
		    		break;
		    	}
		}
		if (nope == 1) {
			cout << "There is no one with their grade equal to 5.";
		}
		
	}
};
int main() {
	StudentGroup *theList;
	theList = new StudentGroup();
	theList->addStudent(Student(10, "John"));
	theList->addStudent(Student(4, "Jeff"));
	//theList->addStudent(Student(5, "Geoff"));
	theList->addStudent(Student(2, "Elvis"));
	theList->addStudent(Student(3, "Johnson"));
	//theList->addStudent(Student(5, "Kevin"));
	theList->firstStudequalTo5();
}