// TP3 EDA LIMPIADOR DE PISO.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "graficar.h"
#include "piso.h"
#define ALTO_BALDOSAS 10
#define ANCHO_BALDOSAS 20
int main()
{
	piso pi;
	pi.asignar_piso(ANCHO_BALDOSAS, ALTO_BALDOSAS);
	pi.setear_sucio();
	graficar p(ALTO_BALDOSAS, ANCHO_BALDOSAS,&pi);
	p.GraficarIntro();
	p.GraficarPiso();
	p.GraficarFin();

    return 0;
}

