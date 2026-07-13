#pragma once
#include "ObjetoFisico.h"

class Pelota : public ObjetoFisico {

private:

    float radio;
    Texture2D texturaPelota;

    // Banderas crudas de colisión física
    bool contactoGate = false;
    bool contactoNet = false;
    bool contactoSuelo = false;
    bool rebote = false;

    // Bandera lógica controlada por el juego
    bool cruzandoAro = false;

public:

    Pelota(b2World* mundo, b2Vec2 posicion, float r, Color col);
    ~Pelota();

    void Dibujar() override;

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

    // Setters y Getters para el rebote
    void SetRebote(bool estado) { rebote = estado; }
    bool GetRebote() { return rebote; }

    void ResetearEstados() {

        contactoGate = false;
        contactoNet = false;
        contactoSuelo = false;
        cruzandoAro = false;
        rebote = false;

    }

};