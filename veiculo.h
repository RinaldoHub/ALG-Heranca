#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

#include <iostream>
using namespace std;

//COMECO PARTE 2
class Veiculo{
protected:
string nome;

public:
    Veiculo(const char * nome)
    {
        this->nome = string(nome);
        cout << "O Veiculo " << nome << " foi CRIADO(A)" << endl;
    }

    virtual ~Veiculo(){
        cout << "O Veiculo " << nome << " foi DESTRUIDO(A)" << endl;
    }

    virtual void mover() = 0;
};

//SUBCLASSE TERRESTRE
class Terrestre : public virtual Veiculo {
private: //COMECO PARTE 3
    int cap_pass;

protected:
    Terrestre() : Veiculo("parametro"){}

public:
    Terrestre(const char * nome) : Veiculo(nome){
        cap_pass = 5;
    }

     virtual ~Terrestre(){
        cout << "O veiculo Terrestre " << Terrestre::nome << " foi DESTRUIDO(A)" << endl;
    }

//    virtual ~Terrestre(){
//        cout << "O veiculo Terrestre " << Terrestre::nome << " foi DESTRUIDO(A)" << endl;
//    }

    void setCapPass(int cp);
    int getCapPass();
    void mover();
};

//SUBCLASSE AQUATICO
class Aquatico : public virtual Veiculo {
private:
    float carga_max;

protected:
    Aquatico() : Veiculo("parametro"){}

public:
    Aquatico(const char * nome) : Veiculo(nome){
        carga_max = 10;
    }

    virtual ~Aquatico(){
        cout << "O veiculo Aquatico " << Aquatico::nome << " foi DESTRUIDO(A)" << endl;
    }

//    virtual ~Aquatico(){
//        cout << "O veiculo Terrestre " << Terrestre::nome << " foi DESTRUIDO(A)" << endl;
//    }

    void setCargaMax(float cm);
    float getCargaMax();
    void mover();
};

//SUBCLASSE AEREO
class Aereo : public Veiculo {
private:
    float vel_max;

public:
    Aereo(const char * nome) : Veiculo::Veiculo(nome){
        vel_max = 100;
    }

    virtual ~Aereo(){
        cout << "O veiculo Aereo " << Aereo::nome << " foi DESTRUIDO(A)" << endl;
    }

    void setVelMax(float vm);
    float getVelMax();
    void mover();
};

//COMECO PARTE 5
class Anfibio : public Terrestre, public Aquatico {
public:
    Anfibio (const char * nome) : Veiculo(nome), Terrestre(), Aquatico() {}

    void mover(){
        Terrestre::mover();
        Aquatico::mover();
    }
};

#endif // VEICULO_H_INCLUDED
