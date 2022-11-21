/*
class Police{
private:
      int age;
      Driver driver;
      Engine engine;
public:
      setters and getters
      ///methods
      askToStop();
      papersCar askForCarsPapers();
      personId askForPersonId();
      driverLicense askForPersonsDriverLicense();
      Car arrest();
}
class papersCar{
      int age;
      string carProducer;
      string carOwner;
      string carsLicense;
      int height;
      int width;
      int weight;
public:
      bool expire() veryfies wheter the date on the person's car paper is expired or not
}
class driverLicense{
      int age;
      string theDateWasMade;
      string theDateWhenExpires;
      string first_name;
      string second_name;
public:
      bool expire() veryfies wheter the date on the person's license is expired or not 
}
class personId(){
      int age;
      int height;
      string first_name;
      string second_name;
      string theDateWasMade;
      string theDateWhenExpires;
      string cityOfBirth;
public:
      bool expire() veryfies wheter the date on the person's id is expired or not 
}
class Driver{
      personId id;
      papersCar papers;
      driverLicense license;
public:
      getters and setters
}
class Engine{
    float gallons;
    int horsePower;
public:
       void start();
       void accelerate();
       void stop();
}
class Car{
      int age;
      Driver driver;
      Engine engine;
public:
      setters and getters and methods
      pullOver();
}
main(){
    Car *Person();
    Police *Policeman();
    Person->start();
    Person->accelerate();
    Policeman->askToStop();
    Person->pullOver();
    Person->stop();
    if(Police->askForPersonDriverLicense()->expire() is true)
        Police->arrest(Person);
    else
        Person->start();
        Person->accelerate();
    if(Police->askForPersonId()->expire() is true)
        Police->arrest(Person);
    else
        Person->start();
        Person->accelerate();
    if(Police->askForCarsPaper()->expire() is true)
        Police->arrest(Person);
    else
        Person->start();
        Person->accelerate();
}
*/