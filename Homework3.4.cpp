#include<iostream>
#include<list>
using namespace std;
class Student {
	int grades;
	string name;
public:
	Student(int grades = 0, string name = "John Doe") {
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
	void addStudents(Student* Stud) {
		this->ListOfTheStudents.push_back(Stud);
	}
	list<Student*> getStudent() {
		return this->ListOfTheStudents;
	}
	void displayMoreSpecific() {
		for (Student* Studs : this->ListOfTheStudents) {
			if (Studs->getGrades()>=5) {
				cout << Studs->getGrades() << " " << Studs->getNames() << endl;
			}
		}
	}
};
int main() {
	GroupOfStudents* List;
	List = new GroupOfStudents();
	List->addStudents(new Student(10, "Ulysses"));
	List->addStudents(new Student(8, "Ivan"));
	List->addStudents(new Student(2, "Jesse"));
	List->addStudents(new Student(9, "Washington"));
	List->addStudents(new Student(8, "Delta"));
	List->addStudents(new Student(3, "Abraham"));
	List->addStudents(new Student(2, "George"));
	List->addStudents(new Student(1, "Trump"));
	List->addStudents(new Student(9, "White"));
	List->addStudents(new Student(1, "Adolf"));
	List->addStudents(new Student(4, "Prometeus"));
	List->addStudents(new Student(5, "Issac"));
	List->addStudents(new Student(2, "Jesse"));
	List->addStudents(new Student(1, "Dakota"));
	List->addStudents(new Student(3, "Delta"));
	List->addStudents(new Student(6, "Lincoln"));
	List->addStudents(new Student(5, "Doe"));
	List->addStudents(new Student(1, "Joe"));
	List->addStudents(new Student(1, "Otto"));
	List->addStudents(new Student(1, "Ferdinand"));
	List->displayMoreSpecific();
	return 0;
}