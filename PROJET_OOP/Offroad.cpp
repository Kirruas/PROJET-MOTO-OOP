#include "Offroad.hpp"
#include <iostream>


Offroad::Offroad(string mark, string type_cylinder, int cylinder,
 int gear,int horses, int autonomia, int vit_max, int engine_turn,
  string opona, string matter, int distanceamortyzator): Moto(mark, 
type_cylinder, cylinder, gear, horses), 
autonomia(autonomia), vit_max(vit_max), engine_turn(engine_turn),
 opona(opona), matter(matter), distanceamortyzator(distanceamortyzator){}


void Offroad::setAutonomia(int autonomia){
    this-> autonomia=autonomia;
}

void Offroad::setVitMax(int vit_max){
    this-> vit_max=vit_max;
}

void Offroad::setEngineTurn(int engine_turn){
    this-> engine_turn=engine_turn;
}

void Offroad::setOpona(string opona){
    this-> opona=opona;
}

void Offroad::setMatter(string matter){
    this-> matter=matter;
}

void Offroad::setDistanceAmortyzator(int distanceamortyzator){
    this-> distanceamortyzator=distanceamortyzator;
}

int Offroad::getAutonomia() const{
    cout<<"km of autnomia : "<<autonomia<<"km"<<endl;
    return autonomia;
}

int Offroad::getVitMax() const{
    cout<<"vit max : "<< vit_max<<"km/h"<<endl;
    return vit_max;
}

int Offroad::getEngineTurn() const{
    cout<<"engine turn : " << engine_turn<< "tr/min"<<endl;
    return engine_turn;
}

string Offroad::getOpona() const{
    cout<<"type of opona : "<< opona<<endl;
    return opona;
}

string Offroad::getMatter() const{
    cout<<"matter of the mortbike : "<<matter<<endl;
    return matter;
}

int Offroad::getDistanceAmortyzator() const{
    cout<<"distance of amortyzator : "<< distanceamortyzator<<"cm"<<endl;
    return distanceamortyzator;
}