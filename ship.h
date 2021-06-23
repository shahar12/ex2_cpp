//
// Created by shahar on 6/23/2021.
//

#ifndef EX3_SHIP_H
#define EX3_SHIP_H


#include "Sim_object.h"
/*status list  :
"Moving to <destination position> on course ..."
"Moving to <port name> on course ..."
"Moving on course ..."
"Docked at <port name>"
"Stopped"
"Dead in the water" */

enum class state{
    Stopped,
    Docked,
    Dead_in_water,
    move_to,
};

class ship: public Sim_object{
private:
    int speed;
    int state;
    pair<int,int> location;
    int fuel_amount;
    int fuel_cepacity;
public:
    /* cancel destination of port , change speed to zero , change state  to stopped   */
    void stop();
     /*  set course to destination port , set speed ,change  state  to moving to  */
    void set_course(const pair<int,int> &move_to,unsigned int speed);
    /* set the angle of ship , change status to moving to   */
    void create_angle();
    /* print : 1. name 2. location 3. state   */
    virtual void print_status(const string &name);
    virtual void update();
};


#endif //EX3_SHIP_H
