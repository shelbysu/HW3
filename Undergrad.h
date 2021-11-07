//
// Created by Shelby on 11/7/2021.
//

#ifndef SHELBYSU_HW3_Q1_UNDERGRAD_H
#define SHELBYSU_HW3_Q1_UNDERGRAD_H
#include "Student.h"

class Undergrad:public Student {
public:
    Undergrad():major(""), concentration(""){}
    Undergrad(string maj, string con):major(maj), concentration(con){}
    string getMajor(){return major;}
    void setMajor(string majName){major=majName;}
    string getCon(){return concentration;}
    void setCon(string conName){concentration=conName;}

protected:
    string major;
    string concentration;


};


#endif //SHELBYSU_HW3_Q1_UNDERGRAD_H
