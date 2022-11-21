#include<iostream>
#include<list>
using namespace std;
class Student {
	int grades;
	string name;
public:
	Student(int grades=0,string name="John Doe") {
		this->grades = grades;
		this->name = name;
	}
	int getGrades() {
		return grades;
	}
	string getNames() {
		return name;
	}
};
class GroupOfStudents {
private:
	list<Student*>ListOfTheStudents;
public:
	void addStudents(Student *Stud) {
		this->ListOfTheStudents.push_back(Stud);
	}
	list<Student*> getStudent() {
		return this->ListOfTheStudents;
	}
	void displaySpecific(string theStudent) {
		for (Student *Studs : this->ListOfTheStudents) {
			if (theStudent == Studs->getNames()) {
				cout << Studs->getGrades() << " " << Studs->getNames() << endl;
				break;
			}
		}
	}
};
int main() {
	GroupOfStudents *theList;
	theList = new GroupOfStudents();
	theList->addStudents(new Student(10, "Hector"));
	theList->addStudents(new Student(8, "Gustavo"));
	theList->addStudents(new Student(2, "Jesse"));
	theList->addStudents(new Student(9, "Walter"));
	theList->addStudents(new Student(8, "Schrader"));
	theList->addStudents(new Student(3, "Washington"));
	theList->addStudents(new Student(2, "Abraham"));
	theList->addStudents(new Student(1, "Trump"));
	theList->addStudents(new Student(9, "White"));
	theList->addStudents(new Student(1, "Joseph"));
	theList->displaySpecific("Walter");
	theList->displaySpecific("White");
	return 0;
}