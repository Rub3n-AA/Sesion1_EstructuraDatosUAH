#include "Persona.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(nullptr));

    Persona* personas[10];

    // Crear 10 personas con edades distintas (18 a 27)
    for (int i = 0; i < 10; i++) {
        personas[i] = new Persona(18 + i);
	
}

	for (int i = 0; i < 10; i++) {
			personas[i]->mostrar();
}
		
	for (int i = 0; i < 10; i++) {
        delete personas[i];
}

return 0;
}
