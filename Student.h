//
// Created by Shelby on 11/7/2021.
//

#ifndef SHELBYSU_HW3_Q1_STUDENT_H
#define SHELBYSU_HW3_Q1_STUDENT_H
#include <string>
using namespace std;
#include "Person.h"

class Student:public Person {
public:
    Student():studentNum(0){}
    Student(int num):studentNum(num){}
    void setStudentNum(int stnum){studentNum=stnum;}
    int getStudentNum(){return(studentNum);}
protected:
    int studentNum;

};


#endif //SHELBYSU_HW3_Q1_STUDENT_H
