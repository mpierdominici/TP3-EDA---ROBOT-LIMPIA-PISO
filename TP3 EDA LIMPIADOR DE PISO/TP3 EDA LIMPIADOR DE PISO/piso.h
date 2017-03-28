#ifndef _PISO
#define _PISO
#include <iostream>
#include <stdio.h>

#include <new>


class piso {
private:
		bool * arreglo_baldosa;			// Puntero al arreglo del piso, va desde el (1,1) al infinito...
		unsigned int ancho_de_tablero;
		unsigned int alto_de_tablero;

public:
	piso();
	void asignar_piso(unsigned int a, unsigned int l); // Constructor para asignar el tamaño del piso siendo A el ancho y L el largo maximos para c/u
	bool esta_sucio(unsigned int x, unsigned int y); //Funcion que informa si la baldosa esta sucia o no ; se le pasa las coordenadas a la baldosa
	void limpiar_baldosa(unsigned int coord_x, unsigned int coord_y);	
	bool estado_de_la_baldosa(unsigned int coord_x, unsigned int coord_y);	//Funcion que devuelve el estado de la valdosa
	bool asignacion_correcta(); //funcion para ver si el malloc que se hizo se asigno bien
	void setear_sucio();			//Pone todo en 0 
	void destroy_piso();
	bool TodoLimpio(); // devuelve true si todo el piso esta limpio
	//SOBRECARGAS 
	// por si es util recibir parametros de otra manera

	template <typename T1, typename T2 >void asignar_piso(T1& puntero_1, T2 & puntero_2 = NULL); // Constructor para asignar el tamaño del piso con opcion a 2 punteros distintos
	//bool esta_sucio(bool& puntero_a_baldosa); //Funcion que informa si la baldosa esta sucia o no ; se le pasa el puntero a la baldosa
	template <typename T1, typename T2 >void  limpiar_baldosa(T1& puntero_1, T2 & puntero_2 = NULL); // Limpia baldosa con opcion a 2 punteros
	template <typename T1, typename T2 > bool estado_de_la_baldosa(T1& puntero_1, T2 & puntero_2 = NULL);	//Funcion que devuelve el estado de la valdosa
										


};



//
//DEFINICION DE FUNCIONES SOBRECARGADAS
//
//El segundo puntero esta demas por si en algun momento es necesario, para ya tenerlo en la funcion


/* bool piso::esta_sucio(bool & puntero_a_baldosa)
{
	 bool esta_sucio = true;
	 if (puntero_a_baldosa == true) {
		 esta_sucio = false;
	 }
	 else
	 {
		 esta_sucio = true;
	 }
	return esta_sucio;									//OJO el false que devuelve significa que esta limpia
}



template<typename T1, typename T2 >
inline void piso::asignar_piso(T1 & puntero_1, T2 & puntero_2)
{
	arreglo_baldosa = &puntero_1;					//Asumo que puntero_1 apunta a la direccion del Calloc

}

template<typename T1, typename T2 >
inline void piso::limpiar_baldosa(T1 & puntero_1, T2 & puntero_2)				//Puntero_1 apunta a la baldosa que quiero limpiar
{
	if (puntero_1 == false) {		//Si esta sucio...

		puntero_1 = true;
	}
}

template<typename T1, typename T2>
inline bool piso::estado_de_la_baldosa(T1 & puntero_1, T2 & puntero_2)			//puntero_1 apunta a la baldosa
{
	return puntero_1;
}
*/
#endif // !_PISO
