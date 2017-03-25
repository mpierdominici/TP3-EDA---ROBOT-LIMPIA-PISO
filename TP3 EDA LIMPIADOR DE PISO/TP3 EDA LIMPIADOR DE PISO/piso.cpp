#include "piso.h"

// ASUMO QUE LAS BALDOSAS ESTAN SUCIAS CUANDO VALEN 0 Y  ESTAN LIMPIAS CUANDO VALEN 1

piso::piso()
{
	arreglo_baldosa = NULL;
	ancho_de_tablero = 0;
	alto_de_tablero = 0;
}			//Constructor

void piso::asignar_piso(unsigned int a, unsigned int l)
{
	arreglo_baldosa = new bool[a*l];
	
    ancho_de_tablero= a;
    alto_de_tablero=l;
	

}

bool piso::esta_sucio(unsigned int x, unsigned int y)			//x e y son las coordenadas de la baldosa que quiero acceder
{														//OJO La funcion pregunta si esta sucio-> devuelve false si esta limio
	bool esta_sucio = true;
	if (*(arreglo_baldosa + ((y - 1)* ancho_de_tablero + x))==true)			//Para desreferenciar el puntero considero la matriz desde el (0,0) al (n,n) que 
	{																			//va de izquierda a derecha, y lo que hago es le resto 1 a la coordenada en y y 
		esta_sucio = false;														//multiplico por x para avanzar todos los casilleros completos que tengo
	}																			//y luego le sumo x propiamente dicho para moverme en la fila que estoy
	else
	{
		esta_sucio = true;
	}
	return esta_sucio;
}


void piso::limpiar_baldosa(unsigned int coord_x, unsigned int coord_y)
{
    if (coord_x>ancho_de_tablero || coord_y> alto_de_tablero){
        
        exit (4);
    }
	if (*(arreglo_baldosa + ((coord_y - 1)* ancho_de_tablero + coord_x)) != true)			//Si es falso entonces esta sucia y hay que limpiarla
	{																			
		*(arreglo_baldosa + ((coord_y - 1)* ancho_de_tablero + coord_x)) = true;	//Limpio la Baldosa
	}																		
	
}

bool piso::estado_de_la_baldosa(unsigned int coord_x, unsigned int coord_y)
{
    if (coord_x>ancho_de_tablero || coord_y> alto_de_tablero){
    
    exit (4);
    }
	return (*(arreglo_baldosa + ((coord_y - 1)* ancho_de_tablero + coord_x)));					//OJO aca el 0 no es de falso sino que indica que esta sucia
}
	
bool piso::asignacion_correcta()					//Devuelve true (1) si la asignacion fue correcta, si pudo hacer el malloc (new)
{
	if (arreglo_baldosa != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void piso::setear_sucio()
{
	for (int i = 0; i <= (ancho_de_tablero*alto_de_tablero); i++) {
		*(arreglo_baldosa + i) = 0;
		printf("%d\n", *(arreglo_baldosa + i));
	}
}

void piso::destroy_piso()
{
	  delete [] (arreglo_baldosa);

}
