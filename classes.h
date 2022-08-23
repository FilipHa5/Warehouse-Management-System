#include <iostream>
#include <string>

using namespace std;

class Cargo {
protected: 
    string name;
    string type;
    int quantity;
    float total_mass;

public:
    void info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Total mass: "<<total_mass<<endl;
    }
    
Cargo(string n, string t, int q, float m){
    name = n;
    type = t;
    quantity = q;
    total_mass = m;
}
};

class Container : public Cargo {
protected:
    string number;
    float length;
    float breadth;
    float height;
    float unit_mass;

public:
    void info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Number: "<<number;
        cout<<"Length: "<<length;
        cout<<"Breadth: "<<breadth;
        cout<<"Heigth: "<<height;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Unit mass: "<<unit_mass;
        cout<<"Total mass: "<<total_mass<<endl;

    }
Container(string n, string t, string nr, float l, float b, float h, float um)
:Cargo(n, t, q){
    name = n;
    type = t;
    quantity = q;
    number = nr;
    length = l;
    breadth = b;
    height = h;
    unit_mass = um;
    total_mass = um*quantity;
}
};
