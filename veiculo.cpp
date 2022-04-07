#include <iostream>
#include "veiculo.h"
using namespace std;

void Terrestre::setCapPass(int cp){
    Terrestre::cap_pass = cp;
}

int Terrestre::getCapPass(){
    cout << "Capacidade de Passageiros do Veiculo " << nome << " e: " << cap_pass << endl;
}

void Aquatico::setCargaMax(float cm){
    Aquatico::carga_max = cm;
}

float Aquatico::getCargaMax(){
    cout << "Carga Maxima do Veiculo " << nome << " e: " << carga_max << endl;
}

void Aereo::setVelMax(float vm){
    Aereo::vel_max = vm;
}

float Aereo::getVelMax(){
    cout << "Velocidade Maxima do Veiculo " << nome << " e: " << vel_max << endl;
}

//COMECO PARTE 4
//void Veiculo::mover(){
//    cout << "Veiculo " << Veiculo::nome << " moveu" << endl;
//}

void Terrestre::mover(){
    cout << "Veiculo terrestre " << Terrestre::nome << " moveu" << endl;
}

void Aquatico::mover(){
    cout << "Veiculo aquatico " << Aquatico::nome << " moveu" << endl;
}

void Aereo::mover(){
    cout << "Veiculo aereo " << Aereo::nome << " moveu" << endl;
}
