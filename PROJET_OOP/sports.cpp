#include "sports.hpp"
#include <iostream>



Sports::Sports(string mark, string type_cylinder, int cylinder, int gear,int horses, int autonomia, int vit_max, int engine_turn, string fairing, string matter): Moto(mark, 
type_cylinder, cylinder, gear, horses), 
autonomia(autonomia), vit_max(vit_max), engine_turn(engine_turn), fairing(fairing), matter(matter){}


void Sports::setAutonomia(int autonomia){
    this-> autonomia=autonomia;
}

void Sports::setVitMax(int vit_max){
    this-> vit_max=vit_max;
}

void Sports::setEngineTurn(int engine_turn){
    this-> engine_turn=engine_turn;
}

void Sports::setFairing(string fairing){
    this-> fairing=fairing;
}

void Sports::setMatter(string matter){
    this-> matter=matter;
}

int Sports::getAutonomia() const{
    cout<<"km of autnomia : "<<autonomia<<"km"<<endl;
    return autonomia;
}

int Sports::getVitMax() const{
    cout<<"vit max : "<< vit_max<<"km/h"<<endl;
    return vit_max;
}

int Sports::getEngineTurn() const{
    cout<<"engine turn : " << engine_turn<< "tr/min"<<endl;
    return engine_turn;
}

string Sports::getFairing() const{
    cout<<"type of fairing : "<< fairing<<endl;
    return fairing;
}

string Sports::getMatter() const{
    cout<<"matter of the mortbike : "<<matter<<endl;
    return matter;
}

int Sports::calculCouple() const{
    cout<<"torque : "<< (horses*7000)/engine_turn<<endl;
    return (horses*7000)/engine_turn;

}