#pragma once
#include "ObjetoFisico.h"

class Pelota : public ObjetoFisico {

private:

    float radio;
    Texture2D texturaPelota;

    //bool tocoSensor = false;
    //bool cruzandoAro = false;
    //bool contabilizada = false;
    //bool tocoSuelo = false;

    // Banderas crudas de colisión física
    bool contactoGate = false;
    bool contactoNet = false;
    bool contactoSuelo = false;

    // Bandera lógica controlada por el juego
    bool cruzandoAro = false;

public:

    Pelota(b2World* mundo, b2Vec2 posicion, float r, Color col);
    ~Pelota();

    void Dibujar() override;

    //void MarcarAnotacion() { tocoSensor = true; }
    //bool Anoto() { return tocoSensor; }
    //void SetCruzandoAro(bool status) { cruzandoAro = status; }
    //bool GetCruzandoAro() { return cruzandoAro; }
    //void SetContabilizada(bool estado) { contabilizada = estado; }
    //bool FueContabilizada() { return contabilizada; }
    //void MarcarEnSuelo() { tocoSuelo = true; }
    //bool EnSuelo() { return tocoSuelo; }

    // Setters y Getters físicos (los usa el Listener)
    void SetContactoGate(bool estado) { contactoGate = estado; }
    bool GetContactoGate() { return contactoGate; }

    void SetContactoNet(bool estado) { contactoNet = estado; }
    bool GetContactoNet() { return contactoNet; }

    void SetContactoSuelo(bool estado) { contactoSuelo = estado; }
    bool GetContactoSuelo() { return contactoSuelo; }

    // Setters y Getters lógicos (los usa Juego::Actualizar)
    void SetCruzandoAro(bool estado) { cruzandoAro = estado; }
    bool GetCruzandoAro() { return cruzandoAro; }


    void ResetearEstados() {

        //tocoSensor = false;
        //cruzandoAro = false;
        //contabilizada = false;
        //tocoSuelo = false;

        contactoGate = false;
        contactoNet = false;
        contactoSuelo = false;
        cruzandoAro = false;

    }

};