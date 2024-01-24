#include "moto.hpp" 

Moto::Moto(string mark, string type_cylinder, int cylinder, int gear, int horses) : mark(mark), type_cylinder(type_cylinder), cylinder(cylinder), gear(gear), horses(horses){}

void Moto::setMark(string mark){
    this->mark=mark;
}

void Moto::setType_Cylinder(string Type_Cylinder){
    this->type_cylinder=type_cylinder;
}

void Moto::setGear(int gear){
    this->gear=gear;
}

void Moto::setCylinder(int cylinder){
    this->cylinder=cylinder;
}

void Moto::setHorses(int horses){
    this->horses=horses;
}

string Moto::getMark() const{
    cout<<"mark of the motorbike : " << mark<<endl;
    return mark;
}

int Moto::getCylinder() const{
    cout<<"cylinder : "<<cylinder<<"cm^3"<<endl;
    return cylinder;
}

string Moto::getType_Cylinder() const{
    cout<<"type of cylinder : "<< type_cylinder<<endl;
    return type_cylinder;
}

int Moto::getGear() const{
    cout<<"gear : "<<gear<<endl;
    return gear;
    }

int Moto::getHorses() const{
    cout<<"horses : "<<horses<<endl;
    return horses;
}

void Moto::print() const{
    cout<< mark <<endl;
}