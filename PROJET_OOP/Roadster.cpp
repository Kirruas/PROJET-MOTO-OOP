#include "Roadster.hpp"
#include <iostream>

Roadster::Roadster(string mark, string type_cylinder, int cylinder, int gear,int horses, int autonomia, int vit_max, int engine_turn, string position_driver, string matter): Moto(mark, 
type_cylinder, cylinder, gear, horses), 
autonomia(autonomia), vit_max(vit_max), engine_turn(engine_turn), position_driver(position_driver), matter(matter){}


void Roadster::setAutonomia(int autonomia){
    this-> autonomia=autonomia;
}

void Roadster::setVitMax(int vit_max){
    this-> vit_max=vit_max;
}

void Roadster::setEngineTurn(int engine_turn){
    this-> engine_turn=engine_turn;
}

void Roadster::setPositionDriver(string position_driver){
    this-> position_driver=position_driver;
}

void Roadster::setMatter(string matter){
    this-> matter=matter;
}

int Roadster::getAutonomia() const{
    cout<<"km of autnomia : "<<autonomia<<"km"<<endl;
    return autonomia;
}

int Roadster::getVitMax() const{
    cout<<"vit max : "<< vit_max<<"km/h"<<endl;
    return vit_max;
}

int Roadster::getEngineTurn() const{
    cout<<"engine turn : " << engine_turn<< "tr/min"<<endl;
    return engine_turn;
}

string Roadster::getPositionDriver() const{
    cout<<"position of the driver : "<< position_driver<<endl;
    return position_driver;
}

string Roadster::getMatter() const{
    cout<<"matter of the mortbike : "<<matter<<endl;
    return matter;
}