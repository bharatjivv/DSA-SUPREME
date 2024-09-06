#include <iostream>
using namespace std;

class Animal{
  // state or Properties
  private:
  int weight;
  public:
  int age;
  string type;

  // default constructor
  Animal(){
    this->weight = 0;
    this->age = 0;
    this->type = "";
    cout << "Constructor Called " << endl;
  }

  // parameterized constructor
  Animal(int age){
    this->age = age;
    cout << "Parameterized const. called " << endl;
  }

  // copy constructor
  Animal(Animal &obj){
    this->age = obj.age;
    this->weight = obj.weight;
    this->type = obj.type;
    cout << "I am inside copy constructor " << endl;

  }



  Animal(int age, int weight){
    this->age = age;
    this->weight = weight;
    cout << "parameterized constructor 2 called " << endl;
  }


  void eat(){
    cout << "Eating " << endl;
  }

  void sleep(){
    cout << "Sleeping " << endl;

  }

  int getWeight(){
    return weight;
  }

  void setWeight(int w){
    weight = w;
  }

  void print(){
    cout << this->age << " " << this->weight << " " << this->type << endl;
  }

  ~Animal(){
    cout << "I am the destructor " << endl;
  }
  
};











int main() {
  // Object creation
  Animal ramesh;

  // Static 
  ramesh.age = 12;
  ramesh.type = "Lion";
  
  cout << "Age of ramesh is : " << ramesh.age << endl;
  cout << "Name of ramesh is : " << ramesh.type << endl;
  ramesh.sleep();
  ramesh.eat();

  // to private members
  ramesh.setWeight(80);
  cout << "Weight " << ramesh.getWeight() << endl;


  // Dynamic Memory
  Animal* suresh = new Animal;

  (*suresh).age = 15;
  (*suresh).type = "billi";

  // alternate - dynamic
  suresh->age = 17;
  suresh->type = "billi";

  suresh->eat();
  suresh->sleep();


  Animal ac;
  Animal a(90);
  Animal* b = new Animal(100, 80);



  // object copy
  Animal c = a;
  // Animal d(b);

  Animal Animal1(c);

  Animal aa;
  aa.age = 20;
  aa.setWeight(101);
  aa.type = "babbar";

  Animal bb = aa;
  
  cout << "a -> ";
  aa.print();
  cout << "b -> ";
  bb.print();
  
  aa.type[0] = 'G';
  cout << "a -> ";
  aa.print();


  Animal cc;
  cc.age = 5;
  
  cout << "DD object creation : " << endl;
  Animal* dd = new Animal();
  dd->age = 12;

  // manually called destructor
  delete dd;

  
  return 0;
}