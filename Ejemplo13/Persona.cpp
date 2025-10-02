#include "Persona.hpp"
#include <cstdlib>
#include <ctime>
#include <cstdio>

// Constructor
Persona::Persona(int edad) {
    this->edad = edad;
    asignarGenero();
    generarDNI();
}

// Destructor
Persona::~Persona() {
    // Nada que liberar
}

// Devuelve la edad
int Persona::getEdad() const {
    return edad;
}

// Devuelve true si es mujer
bool Persona::esMujer() const {
    return genero;
}

// Cambiar la edad
void Persona::setEdad(int edad) {
    this->edad = edad;
}

// Mostrar información
void Persona::mostrar() const {
    std::cout << "Edad: " << edad
              << " | Genero: " << (genero ? "Mujer" : "Hombre")
              << " | DNI: " << dni
              << std::endl;
}

// ---------------- Métodos privados ----------------
void Persona::asignarGenero() {
    genero = rand() % 2; // 0 ó 1
}

void Persona::generarDNI() {
    int numero = rand() % 90000000 + 10000000; // 8 dígitos
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[numero % 23];
    snprintf(dni, sizeof(dni), "%d%c", numero, letra);
}

