#include <iostream>
#include <string>

using namespace std;

class Cargo {
public:
    vitrual void info() = 0;
    virtual void getVolume() = 0;
    virtual void getDensity() = 0;
    virtual void receipt() = 0;
    virtual void relase() = 0;
    virtual void relase() = 0;
};

class Container : public Cargo {
private:
    string name;
    string type;
    string number;
    float length;
    float breadth;
    float height;
    float unit_mass;
    int quantity;

public:
    Container (string n, string t, string nr, float l, float b, float h, float um, int q){
        this->name = n;
        this->type = t;
        this->number = nr;
        this->length = l;
        this->breadth = b;
        this->height = h;
        this->unit_mass = um;
        this->quantity = q;
    }
    virutal void info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Number: "<<number;
        cout<<"Length: "<<length;
        cout<<"Breadth: "<<breadth;
        cout<<"Heigth: "<<height;
        cout<<"Unit mass: "<<unit_mass;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Total mass: "<<unit_mass*quantity<<endl;

    }
};
