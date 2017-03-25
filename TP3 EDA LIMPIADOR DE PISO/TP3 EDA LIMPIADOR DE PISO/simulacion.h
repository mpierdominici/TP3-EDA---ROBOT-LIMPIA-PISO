
#include <stdint.h>
#include "piso.h"

class simulacion {

private:
	uint16_t NumeroDeRobots; //cantidad de robots que se utilizan en la simulacion
	uint64_t NumeroDeTicks; //cantidad de pasos "ticks" que se requirierion para limpiar el piso
	piso SuperficieAlimpiar;//objeto piso, el que los robots limpian
							// robot * RobotsLimpiadores; //puntero a objetos de clase robot
							// graficar * GraficarSimulacion; //puntero a objeto de clase graficar, si se desea o no graficar la simulacion

public:
	bool ProximaSimulacion();//metodo que avansa un tick la simulacion y devuelve si se limpio el piso
	uint64_t GetTick();//devuelve la cantidad de ticks que le demoro en limpiar el piso
	uint16_t GetNumeroDeRobots();//devuelve la cantidad de robots seteados para la simulacion
	float_t GetPisoAncho();
	float_t GetPisoAlto();
	void StartGraficar();
	void StopGraficar();
	bool EstoyDibujando();
	void Simulacion(uint16_t NumeroDeRobots, float_t X, float_t Y);
	void Simulacion(uint16_t NumeroDeRobots, float_t X, float_t Y, graficar * GraficarSimulacion);
};