// TP3 EDA LIMPIADOR DE PISO.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"
#include <iostream>
#include "graficar.h"
#include "piso.h"
int main()
{
	piso pi;
	pi.asignar_piso(10, 10);
	graficar p(10, 10,&pi);
	p.GraficarMachine();


    return 0;
}

