#ifndef SPORTS_HPP
#define SPORTS_HPP

#include "moto.hpp"

class Sports : public Moto{
    int autonomia;
    int vit_max;
    int engine_turn;
    string fairing;
    string matter;
public:
    Sports(string mark= "Honda", string type_cylinder= " 6 cylinder in star", int cylinder=1500, int gear= 6,int horses= 200, int autonomia =100, int vit_max= 330, int engine_turn=18000, string fairing="Aerodynamic", string matter="Carbon");
    
    void setAutonomia(int autonomia);
    void setVitMax(int vit_max);
    void setEngineTurn(int engine_turn);
    void setFairing(string fairing);
    void setMatter(string matter);

    int getAutonomia() const;
    int getVitMax() const;
    int getEngineTurn() const;
    string getFairing() const;
    string getMatter() const;

    int calculCouple() const;

};



#endif