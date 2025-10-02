#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <cstring>

class Persona {
private: 
    bool genero;       // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10]; 

public:
    Persona(int edad);    // Constructor
    ~Persona();           // Destructor

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int edad);
    void mostrar() const;

private:
    void generarDNI();     // Método auxiliar
    void asignarGenero();  // Método auxiliar
};

#endif // PERSONA_HPP
