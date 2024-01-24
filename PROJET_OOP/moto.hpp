#ifndef MOTO_HPP_INCLUDED   
#define MOTO_HPP_INCLUDED   

#include <string>
#include <iostream>

using namespace std;

class Moto{
protected:
    string mark;
    string type_cylinder;
    int cylinder;
    int gear;
    int horses;
public:
    Moto(string mark= "Yamaha" , string type_cylinder="bi cylinder in V", int cylinder= 200, int gear= 6, int horses= 70);

    void setMark(string mark);
    void setType_Cylinder(string Type_Cylinder);
    void setCylinder(int cylinder);
    void setGear(int gear);
    void setHorses(int horses);

    string getMark() const;
    string getType_Cylinder() const;
    int getCylinder() const;
    int getGear() const;
    int getHorses() const;



    virtual void print() const;

};


#endif