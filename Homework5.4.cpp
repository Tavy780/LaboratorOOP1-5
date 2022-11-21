
/*
class Mosquito {
private:
	string mosquito;
public:
	void setMosquito(string mosquito) { this->mosquito = mosquito; }
	int getMosquito() { return this->mosquito; }
};
class Apartment {
private:
	int numberOfRooms;
	int area;
	Mosquito mosquises;
public:
	Apartment(int numberOfRooms, int area) { this->numberOfRooms = numberOfRooms; this->area = area; }
	void setTheMosquitoes(string theMosquito){this->mosquises.setMosquito(theMosquito);}
	Mosquito getMosquitoAp(){return this->mosquises;}
	bool isMosquitoInApartment(Mosquito mosq){if(mosq.getMosquito()==null) there is no mosquito in an apartment
											  else there it is}
	void setArea(int area){ this->area = area; }
    void setnumberOfRooms(int numberOfRooms) { this->numberOfRooms = numberOfRooms; }
	int getArea() { return this->area; }
	int getNumber() { return this->numberOfRooms; }
};
class Address {
private:
	string theContextOfAddress;
public:
	Address(string theContextOfAddress) { this->theContextOfAddress = theContextOfAddress; }
	void setContext(string theContextOfAddress){ this->theContextOfAddress = theContextOfAddress; }
	string getAddress() { return this->theContextOfAddress; }
};

class BusStation {
private:
	string name;
	list<Bus> bussesThatStop;
	list<Student> listOfStudents;
	Address someAddress;
public:
	void setBusStationAddress(string ItsAddress){ someAddress.setContext(ItsAddress); }
	void addBusses(Bus thatBus) { this->bussesThatStop.push_back(thatBus); }
	list<Bus> getBusses() { return this->bussesThatStop; }
	void addStudents(Student thatStudent) { this->listOfStudents.push_back(thatStudent); }
	list<Student> getStudents() { return this->listOfStudents; }
	Address getAddressBus() { return this->someAddress; }
};
class Engine {
private:
	int speed;
	int horsePower;
	int galons;
public:
	void setSpeed(int s) { speed = s; }
	void setPower(int hor) { horsePower = hor; }
	void setCapacity(int gal) { galons = gal; }
	int getSpeed() { return this->speed; }
	int getPower() { return this->horsePower; }
	int getCapacity() { return this->galons; }
	void startEngine() { cout << "Starts the engine."; }
};
class Vehicle {
private:
	Engine engine;
public:
	void setSpeed(int sp) { this->engine.setSpeed(sp); }
	void setPower(int ho) { this->engine.setPower(ho); }
	void setCapacity(int cap) { this->engine.setCapacity(cap); }
	Engine getEngine() { return this->engine; }
};
class Car  {
protected:
	list<Person> passengers;
	list<Student> thelistOfStudents;
	Driver driver;
	Mosquito mosquis;
public:
	void setTheMosquitos(string theMosquito){this->mosquis.setMosquito(theMosquito);}
	Mosquito getMosquitoCar(){return this->mosquis;}
	void addPassengers(Person passenger) { this->passengers.push_back(passenger); }
	list<Person> getPassengers() { return this->passengers; }
	void addingStudents(Student thatStudent) { this->thelistOfStudents.push_back(thatStudent); }
	list<Student> gettingStudents() { return this->thelistOfStudents; }
};
class Bus  {
protected:
	string license;
	list<Commuter> commuters;
	list<BusStation> stations;
	list<Student> thelist;
	Driver DriverBus;
	Mosquito mosqui;
public:
	static int  nrOfCommuters;
    static int  nrOfBusStations;
	void setLicense(string license){this->license=license;}
	void getLicense(){return this->license;}
	void setTheMosquito(string theMosquito){this->mosqui.setMosquito(theMosquito);}
	Mosquito getMosquitoBus(){return this->mosqui;}
	void moveMosquito(Apartment ap){bus.setTheMosquito(ap.getMosquitoAp().getMosquito());}
	Bus(string driverName, int driverAge) { this->DriverBus.setName(driverName);this->DriverBus.setAge(driverAge); }
	void setLicense(string license) { this->license = license; }
	void addCommuters(Commuter commuter) { this->commuters.push_back(commuter); nrOfCommuters++; }
	list<Commuter> getCommuters() { return this->commuters; }
	void addStations(BusStation theStation) { this->stations.push_back(theStation); nrOfBusStations++; }
	list<BusStation> getStations() { return this->stations; }
	void toAddStudents(Student thatStudent) { this->thelist.push_back(thatStudent); }
	list<Student> togetStudents() { return this->thelist; }
	bool fiindStudent(string driver,string buslicense,Address studentAddress){
		 for(Student stud:this->thelist){
			if(stud.getSchoolAddress()==studentAddress.getContext())
				if(this->DriverBus.getName()==driver&&this->license==buslicense)
					then we found him
					break;
		 }
	}
};
class Person {
private:
	string name;
	int age;
	list<Car> cars;
	Apartment theApartment;
	Address theAddress;
public:
	void setAddress(string hisaddress) { this->theAddress.setContext(hisaddress); }
	void setApartment(int totalArea, int number) { this->theApartment.setArea(totalArea); this->theApartment.setnumberOfRooms(number); }
	void setAge(int age) { this->age = age; }
	void setName(string name) { this->name = name; }
	int getAge() { return this->age; }
	string getName() { return this->name; }
	Address getTheAddress() { return this->theAddress; }
	Apartment getApartment() { return this->theApartment; }
};
class Commuter  {
	string name;
	int age;
public:
	void setNameCommuter(string name) { this->name = name; }
	void setAgeCommuter(int age) { this->age = age; }
	string getNameCommuter() { return name; }
	int getAgeCommuter() { return age; }
};
class Student  {
private:
	bool isDriver;
	string name;
	int age;
	Address theAddress;
	Apartment studentApartment;
public:
    void setApartmentArea(int totarea){this->studentApartment.setArea(totArea);}
	void setNumberOfRooms(int numb){this->studentApartment.setNumberOfRooms(numb);}
	void setAge(int age) { this->age = age; }
	void setName(string name) { this->name = name; }
	void setSchoolAddress(string School) { this->theAddress.setContext(School); }
	int getAge() { return this->age; }
	string getName() { return this->name; }
	bool isTheDriver() {return this->isDriver;}
	Address getSchoolAddress() { return this->theAddress; }
	Apartment MovingApartment(Person personsapartment) {this->studentApartment.setApartmentArea(personapartment.getApartment().getArea());
														this->studentApartment.setNumberOfRooms(personapartment.getApartment().getNumber());}
};
class Driver  {
private:
	string name;
	int age;
public:
	void setAge(int age) { this->age = age; }
	void setName(string name) { this->name = name; }
	int getAge() { return this->age; }
	string getName() { return this->name; }
};
int Bus::nrOfCommuters = 0;
int Bus::nrOfBusStations = 0;
main():
     here are the declarations and the static variables would modify at every declaration;
	 codul nu merge in princiu ,dar banuies ca e scris cum ar trebui sa fie rezolvate cele 9 cerinte de la 5.4
*/
