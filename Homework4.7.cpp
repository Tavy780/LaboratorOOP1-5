/*
class Coordinates{
private:
	double coordX;
	double coordY;
public:
    Coordinates(double coordX,double coordY){this->coordX=coordX;this->coordY=coordY;}
	getters and setters
};
class Driver {
private:
	string name;
	string address;
public:
	Driver(string name,string address){this->name=name;this->address=address}
	getters and setters
};
class BusStation {
private:
	Coordinates *coord;
	string nameOfStation;
public:
	BusStation(string nameOfStation ;double x;double y){this->nameOfStation=nameOfStation;this->cord=new Coordinates(x,y);}
	getters and setters
	}
};
class Commuter {
private:
	string nameCommuter;
	int age;
public:
	Commuter(sting nameCommuter,int age){this->nameCommuter=nameCommuter;this->age=age;}
	getters....
};
class Bus{
private:
	double Distance;
	string licenseNumber;
    Coordinates *coord;
	Driver *busDriver;
	BusStation *theStartingStation,*theEndStation;
	list<Commuter> passengers;
public:
    Bus(string licenseNumber){this->licenseNumber=licenseNumber;}
	void addPassenger(Commuter thePassenger) {I add a passenger to my list}
	list<Commuter*> getList(){getter}
	void removerPassneger(string namePassenger) {I remove a passenger from my list}	
	void starEngine(){...some code to start the engine}
	void go(){...some code to move on}
	void stopTheEngine(){...some code to stop the engine}
	void getItsCoord(Coordinates *Cords){this->coords=Cords;}
	void setBusDriver(Driver *thebusDriver){this->busDriver=thebusDriver}
	void setStartingPoint(BusStation start){this->theStartingStation=start;}
	void setEndingPoint(BusStation end){this->theEndStation=end;}
	void theDistance(BusStation starting_point, BusStation end_point){calculates the distance between the two stations and returns a real value which is saved in the Distance}
	bool hasArrivedAtTheStation(Coordinates,BusStation end_point){sees if it has arrived at the end point}
	BusStation *getStartingPoint(){return this->theStartingStation;}
	BusStation *getEndPoint(){return this->theEndStation;}
	Coordinater* getItsCoord(Coordinates *Cords){return this->coords;}
	getters;
};
main:
   Bus *theBus;
   theBus=new Bus("20 DJ NNN");
   theBus->setBusDriver(new Driver("Drake","Street Address:1378 Kidd Avenue City:Anchorage State:AK State Full:Alaska Zipcode:99501"));
   theBus->setStartingPoint(new BusStation("Charls Darwin",10,20));
   theBus->setEndingPoint(new BusStation("60 ave",50,60));
   theBus->addPassenger(new Commuter("Hendriks",60));
   theBus->addPassenger(new Commuter("Geoff",50));
   theBus->addPassenger(new Commuter("Madman",25));
   theBus->addPassenger(new Commuter("Steve",30));
   theBus->addPassenger(new Commuter("Mayhem",56));
   theBus->startEngine();
   theBus->go();
   theBus->theDistance(theBus->getStartingPoint();theBus->getEndPoint());
   theBus->getItsCoord(new Coords(something,else));
   if(theBus->hasArrivedAtTheStation(theBus->getItsCoord(),theBus->getEndPoint()))
      theBus->removerPassneger("all the passengers");
	  ....
	  theBus->removerPassneger("all the passengers");
	  theBus->stopTheEngine();
   else
      theBus->go();

*/