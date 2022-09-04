#include <iostream>
#include <string>
#include <vector>

class Cargo {
public:
    virtual void info() = 0;/*
    virtual void getVolume() = 0;
    virtual void getDensity() = 0;
    virtual void receipt() = 0;
    virtual void relase() = 0;*/
};

class Queue : public Cargo {
protected:
    std::vector<Cargo*> queue;
public:
    void queueInfo(){
        std::cout<<queue.size()<<" objects in queue";
    }
    int queueCount(){
        return queue.size();
    }
    virtual void queueCargo(Cargo* ptr){
    }

};

class Container : public Queue {
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
    Container(const char* name, const char* type, const char* number, float length,
        float breadth, float height, float unit_mass, int quantity)
        :name(name), type(type), number(number), length(length), breadth(breadth), 
        height(height), unit_mass(unit_mass), quantity(quantity)
            {
            }
    virtual void info() override {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Type: "<<type<<std::endl;
        std::cout<<"Number: "<<number<<std::endl;
        std::cout<<"Length: "<<length<<std::endl;
        std::cout<<"Breadth: "<<breadth<<std::endl;
        std::cout<<"Heigth: "<<height<<std::endl;
        std::cout<<"Unit mass: "<<unit_mass<<std::endl;
        std::cout<<"Quantity: "<<quantity<<std::endl;
        std::cout<<"Total mass: "<<unit_mass*quantity<<std::endl;

    }
    virtual void queueCargo(Cargo* ptr) override {
        queue.push_back(ptr);
    }
};
