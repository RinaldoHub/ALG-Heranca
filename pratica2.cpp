#include <iostream>
#include "veiculo.h"
using namespace std;

int main() //COMECO PARTE 1
{
    //Veiculo v1("Veiculo"); //FIM PARTE 4
    Terrestre v2("Moto");
    Aereo v3("Jumbo");
    Aquatico v4("Lancha"); //FIM PARTE 2


    Veiculo * terr = new Terrestre("VT1");
    //((Terrestre *)terr)->setCapPass(45);
    dynamic_cast<Terrestre*>(terr)->setCapPass(45);
    dynamic_cast<Terrestre*>(terr)->getCapPass();

    Veiculo * aqua = new Aquatico("VQ1");
    //((Aquatico *)aqua)->setCargaMax(12.5);
    dynamic_cast<Aquatico*>(aqua)->setCargaMax(12.5);
    dynamic_cast<Aquatico*>(aqua)->getCargaMax();

    Veiculo * aereo = new Aereo("VA1");
    ((Aereo *)aereo)->setVelMax(1040.5); //FIM PARTE 3
    ((Aereo *)aereo)->getVelMax();

    Veiculo * anfi = new Anfibio("BTR-80");

    terr->mover();
    aqua->mover();
    aereo->mover();
    anfi->mover();

    delete terr;
    delete aqua;
    delete aereo;
    delete anfi; //FIM PARTE 5

    return 0;
} //FIM PARTE 1
