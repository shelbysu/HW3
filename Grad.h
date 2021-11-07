//
// Created by Shelby on 11/7/2021.
//

#ifndef SHELBYSU_HW3_Q1_GRAD_H
#define SHELBYSU_HW3_Q1_GRAD_H
#include "Student.h"

class Grad:public Student {
public:
    Grad():program(""){}
    Grad(string prog): program(prog){}
    string getProg(){return program;}
    void setProg(string progName){program=progName;}

protected:
    string program;

};


#endif //SHELBYSU_HW3_Q1_GRAD_H
