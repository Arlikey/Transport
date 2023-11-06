#include "Bus.h"
#include <iostream>
using namespace std;

Bus::Bus(double weight, double max_speed, double average_speed, double cost_travel, double max_luggage,
	int passengers_count)
	: Transport(weight, max_speed, average_speed, cost_travel) {
	this->max_luggage_by_passenger = max_luggage;
	this->passengers_count = passengers_count;
	is_have_conditioner = 0;
	is_have_recliners = 0;
	quality_of_seats = 0;
};

void Bus::SetMaxLuggageByPassenger(double max_luggage) {
	this->max_luggage_by_passenger = max_luggage;
};
void Bus::Set_Is_Have_Conditioner(bool is_have_conditioner) {
	this->is_have_conditioner = is_have_conditioner;
};
void Bus::Set_Is_Have_Recliners(bool is_have_recliners) {
	this->is_have_recliners = is_have_recliners;
};
void Bus::SetQualityOfSeats(int passengers_count) {
	this->quality_of_seats = quality_of_seats;
};
void Bus::SetPassengersCount(int passengers_count) {
	this->passengers_count = passengers_count;
};

double Bus::GetMaxLuggageByPassenger() {
	return max_luggage_by_passenger;
};
bool Bus::Get_Is_Have_Conditioner() {
	return is_have_conditioner;
};
bool Bus::Get_Is_Have_Recliners() {
	return is_have_recliners;
};
int Bus::GetPassengersCount() {
	return passengers_count;
};
int Bus::GetQualityOfSeats() {
	return quality_of_seats;
};

void Bus::Show() {
	cout << "\tBUS" << endl << endl;
	cout << "Weight: " << weight << " kg" << endl;
	cout << "Max Speed: " << max_speed << " km/h" << endl;
	cout << "Average Speed: " << average_speed << " km/h" << endl;
	cout << "Cost Travel: " << cost_travel << "$" << endl;
	cout << "Passengers Count: " << passengers_count << endl;
	cout << "Have Conditioner: " << is_have_conditioner << endl;
	cout << "Have Recliners: " << is_have_recliners << endl;
	cout << "Quality of seats: " << quality_of_seats << endl;
	cout << "Max Luggage By Passenger: " << max_luggage_by_passenger << " kg" << endl;
};

void Bus::Comfort() {
	int levelComfort = 5;

	if (is_have_recliners) {
		levelComfort++;
	}
	if (is_have_conditioner) {
		levelComfort++;
	}

	cout << "Bus comfort level = " << levelComfort << endl;
}