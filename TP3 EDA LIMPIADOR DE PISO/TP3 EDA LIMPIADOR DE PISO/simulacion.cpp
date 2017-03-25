#include "simulacion.h"

bool simulacion::ProximaSimulacion()
{
	return false;
}

uint64_t simulacion::GetTick()
{
	return NumeroDeTicks;
}

uint16_t simulacion::GetNumeroDeRobots()
{
	return NumeroDeRobots;
}

float_t simulacion::GetPisoAncho()
{
	return float_t();
}

float_t simulacion::GetPisoAlto()
{
	return float_t();
}

void simulacion::StartGraficar()
{
}

void simulacion::StopGraficar()
{
}

bool simulacion::EstoyDibujando()
{
	return false;
}

simulacion::simulacion(uint16_t NumeroDeRobots, float_t X, float_t Y)
{
}

//simulacion::simulacion(uint16_t NumeroDeRobots, float_t X, float_t Y, graficar * GraficarSimulacion)
//{
//}
