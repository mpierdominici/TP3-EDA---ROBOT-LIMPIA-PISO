#include "graficar.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "intro.h"
#include "finalizar.h"


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
		if (Display != NULL)
		{
			if (al_init_primitives_addon())
			{ 
				if (al_init_image_addon())
				{
					if (al_init_acodec_addon())
					{
						if (al_install_audio())
						{
							if (al_reserve_samples(1))
							{
								if (al_init_font_addon())
								{
									if (al_init_ttf_addon())
									{
										return;
									}
								}
							}
						}
					}
					
				}
				
			}
		}
		al_destroy_display(Display);
		
	}
}

void graficar::GraficarPiso()
{
	al_clear_to_color(al_map_rgb(255, 255, 0));

	al_flip_display();

	for (int x = 1; x <= (WithScreen*LARGO_BALDOSA); x+= LARGO_BALDOSA)
	{
		for (int y = 1; y <= (HeightScreen*LARGO_BALDOSA); y+= LARGO_BALDOSA)
		{
			if ((PisoDraw->esta_sucio(x, y)) == true)//la valsoda esta sucia
			{
				al_draw_filled_rectangle(x, y, x + LARGO_BALDOSA, y + LARGO_BALDOSA, al_map_rgb(rand() % 200, rand() % 200, rand() % 200));
				al_flip_display();

			}
			else
			{
				al_draw_filled_rectangle(x, y, x + LARGO_BALDOSA, y + LARGO_BALDOSA, al_map_rgb(255, 255, 255));
				al_flip_display();

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

void graficar::GraficarIntro()
{
	intro_efectos(Display, WithScreen*LARGO_BALDOSA, HeightScreen*LARGO_BALDOSA);
}

void graficar::GraficarFin()
{
	efectos_para_finalizar(Display, WithScreen*LARGO_BALDOSA, HeightScreen*LARGO_BALDOSA);
}

void graficar::SetRobotPosition(float _x, float _y)
{
	DrawMachine.x = _x;
	DrawMachine.y = _y;
}

void graficar::DrawRobot()
{
	al_draw_filled_circle((DrawMachine.x)*LARGO_BALDOSA, (DrawMachine.y)*LARGO_BALDOSA, 10, al_map_rgb(255, 255, 255));
	al_flip_display();
}
