#include "graficar.h"
#include <allegro5/allegro_primitives.h>
#include <stdlib.h>
#include <stdio.h>
#define LARGO_BALDOSA 50
//graficar(uint16_t HeightScreen_C, uint16_t WithScreen_C)
//constructor de graficatr
//recive alto y ancho en cantidad de valdosas
//
//
graficar::graficar(uint16_t HeightScreen_C, uint16_t WithScreen_C, piso * Piso_C)
{
	PisoDraw = Piso_C;
	HeightScreen = HeightScreen_C;
	WithScreen = WithScreen_C;
	Display = NULL;
	if (al_init())
	{
		Display = al_create_display(WithScreen* LARGO_BALDOSA, HeightScreen * LARGO_BALDOSA);
		if (Display == NULL)
		{
			al_destroy_display(Display);
		}
		

	}
}

void graficar::GraficarMachine()
{
	for (int x = 0; x < WithScreen; x+= LARGO_BALDOSA)
	{
		for (int y = 0; y < HeightScreen; y+= LARGO_BALDOSA)
		{
			if ((PisoDraw->esta_sucio(x, y)) == true)//la valsoda esta sucia
			{
				al_draw_filled_rectangle(x, y, x + LARGO_BALDOSA, y + LARGO_BALDOSA, al_map_rgb(rand() % 255, rand() % 255, rand() % 255));
			}
			else
			{
				al_draw_filled_rectangle(x, y, x + LARGO_BALDOSA, y + LARGO_BALDOSA, al_map_rgb(255, 255, 255));
			}
		}
	}
	;
}

//GraficarCorrectaInicializacion()
//devuelve true si se inicializo correctamente y
//devuelve false si se iniciializo incorrectamente
//
//
bool graficar::GraficarCorrectaInicializacion()
{
	if (Display == NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}
