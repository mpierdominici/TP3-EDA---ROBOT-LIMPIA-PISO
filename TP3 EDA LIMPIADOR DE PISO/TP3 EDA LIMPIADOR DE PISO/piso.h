#pragma once
#ifndef _PISO
#define _PISO
#include <iostream>
#include <stdio.h>
#include <tchar.h>

class piso {
private:
	bool * arreglo_baldosa;			// Puntero al arreglo del piso 
		unsigned int ancho_de_tablero;
		unsigned int largo_de_tablero;

public:
	void asignar_piso(unsigned int a, unsigned int l); // Constructor para asignar el tamaño del piso siendo A el ancho y L el largo maximos para c/u
	bool esta_sucio(unsigned int x, unsigned int y); //Funcion que informa si la baldosa esta sucia o no ; se le pasa las coordenadas a la baldosa
	void limpiar_baldosa(unsigned int coord_x, unsigned int coord_y);	
	bool estado_de_la_baldosa(unsigned int coord_x, unsigned int coord_y);	//Funcion que devuelve el estado de la valdosa
	bool asignacion_correcta(); //funcion para ver si el malloc que se hizo se asigno bien

	//SOBRECARGAS 
	// por si es util recibir parametros de otra manera

	template <typename T1, typename T2 >void asignar_piso(T1& puntero_1, T2 & puntero_2 = NULL); // Constructor para asignar el tamaño del piso con opcion a 2 punteros distintos
	bool esta_sucio(bool& puntero_a_baldosa); //Funcion que informa si la baldosa esta sucia o no ; se le pasa el puntero a la baldosa
	template <typename T1, typename T2 >void  limpiar_baldosa(T1& puntero_1, T2 & puntero_2 = NULL); // Limpia baldosa con opcion a 2 punteros
	template <typename T1, typename T2 > bool estado_de_la_baldosa(T1& puntero_1, T2 & puntero_2 = NULL);	//Funcion que devuelve el estado de la valdosa
										


};
#endif // !_PISO



//
//DEFINICION DE FUNCIONES SOBRECARGADAS
//

template<typename T1, typename T2>
inline void piso::asignar_piso(-T1 & puntero_1, T2 & puntero_2)
{
}

template<typename T1, typename T2 >
inline void piso::asignar_piso(T1 & puntero_1, T2 & puntero_2)
{
}

template<typename T1, typename T2 >
inline void piso::limpiar_baldosa(T1 & puntero_1, T2 & puntero_2)
{
}

template<typename T1, typename T2>
inline bool piso::estado_de_la_baldosa(T1 & puntero_1, T2 & puntero_2)
{
	return false;
}
