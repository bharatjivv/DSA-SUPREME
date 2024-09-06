#include <iostream>
using namespace std;

/*

class Animal{
    private:
        int age;
        int weight;

    public:
        void getAge(){
            cout << this->age << endl;
        }
        void setAge(int age){
            this->age = age;
        }
};

int main(){
    Animal cheetah;
    cheetah.setAge(154);
    cout << "Cheetah ki age hui : ";
    cheetah.getAge();

    return 0;
}
*/

/*

class Animal{
    public:
    int age;
    int weight;

    void eat(){
        cout << "Khara hoon " << endl;
    }

    void getAge(){
            cout << this->age << endl;
        }

    void setAge(int age){
        this->age = age;
    }
};

class Dog: public Animal{

};

int main(){
    Dog bhura;
    bhura.eat();
    bhura.setAge(14);

    Animal cheetah;
    cheetah.setAge(105);

    cout << "Cheetah ki age : ";
    cheetah.getAge();
    cout << "Bhura ki age : ";
    bhura.getAge();

    return 0;
}

*/

/*

class fruit{
    public:
        string name;
};

class mango : public fruit{
    public:
        int weight;
};

class alphanso: public mango{
    public:
        int sugarLevel;
};

int main(){
    alphanso aa;
    cout << aa.name << " " << aa.weight << " " << aa.sugarLevel << endl;

    return 0;
}
*/


/*
class A{
    public:
        int physics = 1;
};

class B{
    public:
        int chemistry = 2;
};

class C: public A, public B{
    public:
        int maths = 3;
};

int main(){
    C obj;
    cout << obj.physics << " " << obj.chemistry << " " << obj.maths << endl;

}
*/



/*
class Car{
    public:
        int age;
        int weight;
        string name;

        void speedUp(){
            cout << name <<  "Uda doon " << endl;
        }
};

class Scorpio : public Car{
    Scorpio(string name){
        this->name = name;
    }
};

class Fortuner : public Car{
    Fortuner(string name){
        this->name = name;
    }
};

int main(){
    Scorpio scr(scr);
    scr.speedUp();

    Fortuner fir(fir);
    fir.speedUp();

    return 0;
}
*/


/*
class Maths{
    public:
        int sum(int a, int b){
            cout << "I am in first signature " << endl;
            return a + b;
        }
        int sum(int a, int b, int c){
            cout << "I am in second signature " << endl;
            return a+b+c;
        }
        int sum(int a, float b){
            cout << "I am in third signature " << endl;
            return a+b;
        }
};

int main(){
    Maths obj;
    cout << obj.sum(2, 5) << endl;
    
    return 0;
}
*/




class Param{
    public:
        int val;
    
    void operator+(Param& obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value2 - value1) << endl;
    }
};

int main(){
    Param obj1, obj2;
    obj1.val = 2;
    obj2.val = 7;

    // this should print the difference between them 
    obj1 + obj2;

    return 0;
}