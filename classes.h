#include <iostream>
#include <string>

class Towar {
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
    
Towar(string n, string t, int q, float m){
    name = n;
    type = t;
    quantity = q;
    total_mass = m;
}
};
