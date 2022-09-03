#include <iostream>
#include <string>
#include <vector>

class Queue : public Cargo {
private:
    std::vector<Cargo*> queue;
public:
    void queueInfo(){
        std::cout<<queue.size()<<" objects in queue";
    }
    int queueCount(){
        return queue.size();
    }
    virtual void queueCargo(Cargo*) = 0{
        queue.push_back(Cargo*);
    }

};

class Cargo {
public:
    vitrual void info() = 0;
    virtual void getVolume() = 0;
    virtual void getDensity() = 0;
    virtual void receipt() = 0;
    virtual void relase() = 0;
};

class Container : public Cargo {
private:
    std::string name;
    std::string type;
    std::string number;
    float length;
    float breadth;
    float height;
    float unit_mass;
    int quantity;

public:
    Container (std::string n, std::string t, std::string nr, float l, float b, float h, float um, int q){
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
        std::cout<<"Name: "<<name<<endl;
        std::cout<<"Type: "<<type<<endl;
        std::cout<<"Number: "<<number;
        std::cout<<"Length: "<<length;
        std::cout<<"Breadth: "<<breadth;
        std::cout<<"Heigth: "<<height;
        std::cout<<"Unit mass: "<<unit_mass;
        std::cout<<"Quantity: "<<quantity<<endl;
        std::cout<<"Total mass: "<<unit_mass*quantity<<endl;

    }
};
