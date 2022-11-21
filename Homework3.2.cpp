#include<iostream>
#include<string>
#include<list>
using namespace std;
class Student {
	int grade;
	string name;
public:
	Student(int grade=0, string name="John Doe") {
		this->grade = grade;
		this->name = name;
	}
	int getGrade(){
		return grade;
	}
	string getName() {
		return name;
	}
};
class Pupils {
private:
	list<Student*>listOfStudents;
public:
	void setStudent(Student *Students) {
		this->listOfStudents.push_back(Students);
	}
	list<Student*> getStudent() {
		return this->listOfStudents;
	}
	void write() {
		for (Student *Studs : listOfStudents) {
			cout << Studs->getGrade() << " " << Studs->getName() << "\n";
		}
	}
	void sortfunction() {
		list<int>nums;
		list<string>na;
		for (Student* Studies : this->listOfStudents) {
			nums.push_back(Studies->getGrade());
			na.push_back(Studies->getName());
		}
		list <int> ::iterator iter,iter1;
		list <string>::iterator iter2,iter3;
		for (iter=nums.begin(),iter2=na.begin();iter2!=na.end() && iter != nums.end();iter++,iter2++) {
			for (iter1=iter,iter3=iter2;iter3!=na.end() && iter1 != nums.end();iter1++,iter3++) {
				if (*iter1<=*iter) {
					swap(*iter3,*iter2);
					swap(*iter1,*iter);
				}
			}
		}
		for (iter=nums.begin(),iter2=na.begin();iter2!=na.end()&&iter!=nums.end();iter++,iter2++) {
			cout << *iter << " " << *iter2 << "\n";
		}
	}
};
int main() {
	Pupils *theList;
	theList = new Pupils();
	theList->setStudent(new Student(10, "Steve"));
	theList->setStudent(new Student(5, "Charlie"));
	theList->setStudent(new Student(1, "John"));
	theList->setStudent(new Student(4, "Cashew"));
	theList->setStudent(new Student(7, "Johnson"));
	theList->setStudent(new Student(5, "Carl"));
	theList->setStudent(new Student(4, "Justin"));
	theList->setStudent(new Student(3, "Poppy"));
	theList->write();
	cout << endl;
	theList->sortfunction();
	return 0;
}