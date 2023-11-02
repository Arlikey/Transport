#pragma once
#include "Transport.h"
class Train : public Transport
{
	int number_of_wagons;
	int passengers_count;
public:
	Train() = default;
	Train(double weight, double max_speed, double average_speed, double cost_travel, int number_of_wagons, int passengers_count);

	void SetNumberOfWagons(int number_of_wagons);
	void SetPassengersCount(int passengers_count);

	int GetNumberOfWagons();
	int GetPassengersCount();

	void Show();

	void Comfort();
};

