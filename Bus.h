#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Bus : public Transport
{
	int passengers_count;
	bool is_have_conditioner;
	bool is_have_recliners;
	int quality_of_seats;
	double max_luggage_by_passenger;
public:
	Bus() = default;
	Bus(double weight, double max_speed, double average_speed, double cost_travel, double max_luggage_by_passenger, int passengers_count);

	void SetMaxLuggageByPassenger(double max_luggage);
	void Set_Is_Have_Conditioner(bool is_have_conditioner);
	void Set_Is_Have_Recliners(bool is_have_recliners);
	void SetQualityOfSeats(int quality_of_seats);
	void SetPassengersCount(int passengers_count);

	double GetMaxLuggageByPassenger();
	bool Get_Is_Have_Conditioner();
	bool Get_Is_Have_Recliners();
	int GetPassengersCount();
	int GetQualityOfSeats();

	void Show();

	void Comfort();
};

