#ifndef OFFROAD_HPP
#define OFFROAD_HPP

#include "moto.hpp"

class Offroad : public Moto{
    int autonomia;
    int vit_max;
    int engine_turn;
    string opona;
    string matter;
    int distanceamortyzator;
public:
    Offroad(string mark= "KTM Cross", string type_cylinder= "3 cylinder", int cylinder= 1000, int gear= 5,int horses =100, int autonomia=150, int vit_max=150, int engine_turn=10000, string opona="adherent", string matter = "plastic", int distanceamortyzator = 30);

    void setAutonomia(int autonomia);
    void setVitMax(int vit_max);
    void setEngineTurn(int engine_turn);
    void setOpona(string opona);
    void setMatter(string matter);
    void setDistanceAmortyzator(int distanceamortyzator);

    int getAutonomia() const;
    int getVitMax() const;
    int getEngineTurn() const;
    string getOpona() const;
    string getMatter() const;
    int getDistanceAmortyzator() const;



};


#endif