#ifndef ROADSTER_HPP
#define ROADSTER_HPP

#include "moto.hpp"



class Roadster : public Moto{
    int autonomia;
    int vit_max;
    int engine_turn;
    string position_driver;
    string matter;
public:
    Roadster(string mark= "Harley", string type_cylinder = "4 cylinder in a row", int cylinder= 900, int gear=5, int horses = 50, int autonomia= 700, int vit_max= 150, int engine_turn= 5000, string position_driver="confortable", string matter= "steel");

    void setAutonomia(int autonomia);
    void setVitMax(int vit_max);
    void setEngineTurn(int engine_turn);
    void setPositionDriver(string position_driver);
    void setMatter(string matter);

    int getAutonomia() const;
    int getVitMax() const;
    int getEngineTurn() const;
    string getPositionDriver() const;
    string getMatter() const;

};


#endif