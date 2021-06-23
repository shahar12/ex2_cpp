//
// Created by shahar on 6/23/2021.
//

#ifndef EX3_SIM_OBJECT_H
#define EX3_SIM_OBJECT_H
#include <tuple>
#include <string>
#include <iostream>
using namespace std;

class Sim_object{
    string name ;
public:
    virtual void print_status(const string &name);
    virtual string& getName();
    virtual string& getLocation();
    virtual void update();
};




#endif //EX3_SIM_OBJECT_H
