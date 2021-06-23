//
// Created by shahar on 6/23/2021.
//

#ifndef EX3_CONTROLLER_H
#define EX3_CONTROLLER_H


class Controller {
    public:
        Controller();
        ~Controller();

        // creates View object, runs the program by accepting user commands, then destroys View object
        void run();

    private:
        View* view_ptr;
};


#endif //EX3_CONTROLLER_H
