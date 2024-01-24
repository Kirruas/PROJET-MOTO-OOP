#include "moto.cpp"
#include "Roadster.cpp"
#include "sports.cpp"
#include "Offroad.cpp"

using namespace std;
int main() {
    int Number;
    cout<<"how many moto do you want ?"<<endl;
    cin>> Number;
    string type;
    cout<<"which type of moto do you want ?"<<endl;
    cin>> type;

    for (int i; i<=Number; i++){
        if (type == "Moto")
        {
            Moto i("Yamaha","bi cylindre en V");
            i.getMark();
        }

        else if(type == "Roadster")
        { 
            Roadster i("Harley","4 cylinder in a row");
             i.getMark();
        }

        else if(type == "Sports")
        { 
            Sports i("Honda","6 cylinder in star");
             i.getMark();
        }
                
        else if (type == "Offroad")
        { 
            Offroad i("KTM cross","3 cylindre");
             i.getMark();
        }
        else if (type != "Moto", "Offroad", "Sports","Roadster")
        {cout<<"error"<<endl;}

    }

    cout <<endl;
    cout<< "Moto"<<endl;
    Moto M1("Yamaha", "bi cylindre en V", 1050, 6, 60);
    M1.getCylinder();
    M1.setCylinder(900);
    M1.getCylinder();
    M1.getMark();
    M1.getGear();
    M1.setMark("Honda");
    M1.getMark();
    M1.getType_Cylinder();
    M1.getHorses();
    M1.setHorses(79);
    M1.getHorses();
    
    cout <<endl;
    cout<< "Roadster"<<endl;

    Roadster R1("Harley", "4 cylinder in a row", 900, 5, 50, 700, 130, 5000, "comfortable", "Steel" );
    R1.getMark();
    R1.getAutonomia();
    R1.getPositionDriver();
    R1.setPositionDriver("DUO");
    R1.getPositionDriver();

    cout <<endl;
    cout<< "Sports"<<endl;
    Sports S1("Honda", "6 cylindre en etoile", 2000, 6, 200, 100, 330, 18000, "normal", "Carbon");
    S1.getMark();
    S1.getAutonomia();
    S1.getVitMax();
    S1.getFairing();
    S1.setFairing("Aerodynamic");
    S1.getFairing();
    S1.calculCouple();

    cout<<endl;
    cout<<"Offroad"<<endl;
    Offroad O1("KTM CROSS", "3 cylindre ", 1000, 5, 150, 150, 150, 10000, "adherent", "Plastic", 30);
    O1.getMark();
    O1.getOpona();
    O1.getDistanceAmortyzator();
    O1.setDistanceAmortyzator(20);
    O1.getDistanceAmortyzator();
    O1.getVitMax();



    cout<<endl;
    cout <<"test pointer"<<endl;
    Moto * ptrM1 = new Sports();
    ptrM1->print();
    delete ptrM1;

}