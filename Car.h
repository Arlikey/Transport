#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;

class Car : public Transport
{
	double max_luggage;
	char segment;
	string body_type;
	int passengers_count;
	string seat_upholstery;
public:
	Car() = default;
	Car(double weight, double max_speed, double average_speed, double cost_travel, double max_luggage, int passengers_count);
	
	void SetMaxLuggage(double max_luggage);
	void SetSegment(char segment);
	void SetBodyType(string body_type);
	void SetPassengersCount(int passengers_count);
	void SetSeatUpholstery(string seat_upholstery);

	double GetMaxLuggage();
	char GetSegment();
	string GetBodyType();
	int GetPassengersCount();
	string GetSeatUpholstery();

	void Show();

	void Comfort();
};

