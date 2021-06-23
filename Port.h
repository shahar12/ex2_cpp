//
// Created by shahar on 6/23/2021.
//

#ifndef EX3_PORT_H
#define EX3_PORT_H

#include "Sim_object.h"

using namespace std;

class Port:public Sim_object{
    pair<int,int> location;
    unsigned int fuel_amount;
    unsigned int fuel_maker_amount;
    unsigned int number_of_container;
public:
    Port();
    Port(string& name);
    ~Port();
    void load();
    void unload();
    void update();
};


#endif //EX3_PORT_H
