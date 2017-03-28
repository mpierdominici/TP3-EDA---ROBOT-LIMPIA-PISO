#include "simulacion.h"

//ProximaSimulacion()
//devuelve true si esta todo limpio
//devuelve false si esta todo sucio
//
//
//
bool simulacion::ProximaSimulacion()
{
	if ((SuperficieAlimpiar.TodoLimpio()) != true)
	{
		
		if (GraficarSimulacion != NULL)//si esta inicializada la parte grafica
		{
			for (int i = 0; i < NumeroDeRobots; i++)//caso que se quiera graficar
			{
				RobotsLimpiadores[i].moveRobot();
				GraficarSimulacion->SetRobotPosition((RobotsLimpiadores + i)->getX(), (RobotsLimpiadores + i)->getY());
				GraficarSimulacion->DrawRobot();
			}

			
		}
		else
		{
			for (int i = 0; i < NumeroDeRobots; i++)//caso de simulacion
			{
				RobotsLimpiadores[i].moveRobot();
			}
			
		}
		NumeroDeTicks++;
		
	}

	if ((SuperficieAlimpiar.TodoLimpio()) == true)
	{
		return true; //el piso esta limpio
	}
	else
	{
		return false;
	}
		
	
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

simulacion::simulacion(uint16_t NumeroDeRobots, float_t X, float_t Y, graficar * GraficarSimulacion)
{
}
