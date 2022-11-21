#include<iostream>
#include<string>
using namespace std;
class Driver {
public:
	string nameOfTheDriver;
	void setDriverName(string na){
		nameOfTheDriver = na;
	}
	string getDriverName() {
		return nameOfTheDriver;
	}
};
class Car {
public:
	int age;
	Driver driver;
	Car(int age,string theName) {
		this->age = age;
		driver.setDriverName(theName);
	}
};
void exchange(Car &CarA,Car& CarB) {
	string aux;
	aux = CarA.driver.getDriverName();
	CarA.driver.setDriverName(CarB.driver.getDriverName());
	CarB.driver.setDriverName(aux);
}
int main() {
	Car Car1(40, "Jessus");
	Car Car2(20, "Garry");
	Car Car3(35, "Mary");
	cout << Car1.age << " " << Car1.driver.getDriverName() << "\n " << Car2.age << " " << Car2.driver.getDriverName() << "\n " << Car3.age << " " << Car3.driver.getDriverName() << "\n";
	exchange(Car1,Car2);
	cout << Car1.age << " " << Car1.driver.getDriverName() << "\n " << Car2.age << " " << Car2.driver.getDriverName() << "\n " << Car3.age << " " << Car3.driver.getDriverName() << "\n";
	exchange(Car1, Car2);
	cout << Car1.age << " " << Car1.driver.getDriverName() << "\n " << Car2.age << " " << Car2.driver.getDriverName() << "\n " << Car3.age << " " << Car3.driver.getDriverName() << "\n";
	exchange(Car1, Car3);
	cout << Car1.age << " " << Car1.driver.getDriverName() << "\n "<< Car2.age << " " << Car2.driver.getDriverName() << "\n " << Car3.age << " " << Car3.driver.getDriverName() << "\n";
	return 0;
}