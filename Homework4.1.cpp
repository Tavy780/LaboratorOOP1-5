#include<iostream>
#include<string>
#include<list>
using namespace std;
class Person{
private:
	int age;
	string name;
public:
	Person(int a,string na) {
		age = a;
		name = na;
	}
	void setAge(int a) {
		 age=a;
	}
	void setName(string na) {
		name=na;
	}
	int getAge() {
		return age;
	}
	string getName() {
		return name;
	}
};
class GroupOfFriends {
private:
	list<Person>Group;
	string name;
public:
	void addPersonsToGroup(Person theGuy) {
		Group.push_back(theGuy);
	}
	list<Person> getGroup() {
		return Group;
	}
	void leavingPersonsFromGroup(string theGuy) {
		list<Person>::iterator it;
		for (it = Group.begin(); it != Group.end(); it++) {
			if ((*it).getName() == theGuy) {
				Group.erase(it);
				break;
			}
		}
	}
	void updatePersonFromGroup(string theGuy) {
		list<Person>::iterator it;
		for (it = Group.begin(); it != Group.end(); it++) {
			if ((*it).getName() == theGuy) {
				(*it).setAge((*it).getAge()+1);
				break;
			}
		}
	}
	void display() {
		for (Person Guys:Group) {
			cout << Guys.getAge() << " " << Guys.getName() << "\n";
		}
		cout << endl;
	}
};
int main() {
	GroupOfFriends theListOfFriends;
	theListOfFriends.addPersonsToGroup(Person(43, "Arnold"));
	theListOfFriends.addPersonsToGroup(Person(31, "Chad"));
	theListOfFriends.addPersonsToGroup(Person(20, "William"));
	theListOfFriends.addPersonsToGroup(Person(55, "Mary"));
	theListOfFriends.addPersonsToGroup(Person(11, "Chucky"));
	theListOfFriends.addPersonsToGroup(Person(13, "Harry"));
	theListOfFriends.addPersonsToGroup(Person(15, "Mannie"));
	theListOfFriends.display();
	theListOfFriends.leavingPersonsFromGroup("Mannie");
	theListOfFriends.leavingPersonsFromGroup("William");
	theListOfFriends.display();
	theListOfFriends.updatePersonFromGroup("Mary");
	theListOfFriends.updatePersonFromGroup("Arnold");
	theListOfFriends.updatePersonFromGroup("Mary");
	theListOfFriends.display();
	theListOfFriends.leavingPersonsFromGroup("Chad");
	theListOfFriends.addPersonsToGroup(Person(31, "George"));
	theListOfFriends.display();
	return 0;
}