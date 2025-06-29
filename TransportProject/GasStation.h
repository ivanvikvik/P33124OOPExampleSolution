#pragma once
#include "Car.h"
#include "Truck.h"

class GasStation
{
public:
	//...
	int calculateTotalGas(Car* cars, int sizeOfCars, Truck* trucks, int sizeOfTrucks) {
		int total = 0;

		for (int i = 0; i < sizeOfCars; i++)
		{
			total += cars[i].tank;
		}

		for (int i = 0; i < sizeOfTrucks; i++)
		{
			total += trucks[i].gas;
		}

		return total;
	}
};

