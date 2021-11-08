#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(std::string first, std::string last, int month, int day, int year);
    std::string getName();
    std::string getBirthdate();
    void setFirst(string first){Fname=first;}
    void setLast(string last){Lname=last;}
    void setDay(int day){birthDay=day;}
    void setYear(int year){birthYear=year;}
    void Month(int month){birthMonth=month;}
    void setAll(string first, string last, int day, int month, int year);

private:
    std::string Fname;
    std::string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;

protected:
    /*You may move private members to protected if needed*/


};

#endif // PERSON_H

