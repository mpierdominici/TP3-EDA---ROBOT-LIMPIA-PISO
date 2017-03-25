#include <stdint.h>
#include <allegro5/allegro.h>
#include "piso.h"
class point
{
public:
	float x;
	float y;
	
};

class graficar
{
private:
	piso * PisoDraw;
	point DrawMachine;
	uint16_t HeightScreen;
	uint16_t WithScreen;
	ALLEGRO_DISPLAY * Display;
public:
	graficar (uint16_t HighScreen, uint16_t WithScreen, piso * Piso_C);
	void GraficarMachine();
	bool GraficarCorrectaInicializacion();
};

