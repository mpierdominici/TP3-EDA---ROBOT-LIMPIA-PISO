
#ifndef GRAFICAR_H
#define GRAFICAR_H
#include <stdint.h>

#include <allegro5/allegro_primitives.h>
#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_color.h>
#include<allegro5\allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
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
	void GraficarPiso();
	bool GraficarCorrectaInicializacion();
	void GraficarIntro();
	void GraficarFin();
	void SetRobotPosition(float _x, float _y);
	void DrawRobot();
};

#endif
