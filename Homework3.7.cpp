#include<iostream>
#include<list>
using namespace std;
class Student {
	int grades;
	string name;
public:
	static int studentCount;
	Student(int grades = 0, string name = "John Doe") {
		this->grades = grades;
		this->name = name;
		studentCount++;
	}
	int getGrades() {
		return grades;
	}
	string getNames() {
		return name;
	}
};
int Student::studentCount = 0;
int main() {
	Student* Stud1, * Stud2, * Stud3;
	Stud1 = new Student(10,"Charlie");
	Stud2 = new Student(9,"Adolf");
	Stud3 = new Student(10, "Mary");
	cout << "Total " << Student::studentCount;
	return 0;
}