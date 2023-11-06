#include "Metro.h"
#include <iostream>
using namespace std;

Metro::Metro(double weight, double max_speed, double average_speed, double cost_travel, int number_of_wagons,
	int passengers_count) : Transport(weight, max_speed, average_speed, cost_travel) {
	this->number_of_wagons = number_of_wagons;
	this->passengers_count = passengers_count;
};

void Metro::SetNumberOfWagons(int number_of_wagons) {
	this->number_of_wagons = number_of_wagons;
};
void Metro::SetPassengersCount(int passengers_count) {
	this->passengers_count = passengers_count;
};

int Metro::GetNumberOfWagons() {
	return number_of_wagons;
};
int Metro::GetPassengersCount() {
	return passengers_count;
};

void Metro::Show() {
	cout << "\tMETRO" << endl << endl;
	cout << "Weight: " << weight << " kg" << endl;
	cout << "Max Speed: " << max_speed  << " km/h" << endl;
	cout << "Average Speed: " << average_speed << " km/h" << endl;
	cout << "Cost Travel: " << cost_travel << "$" << endl;
	cout << "Number Of Wagons: " << number_of_wagons << endl;
	cout << "Passengers Count: " << passengers_count << endl;
};

void Metro::Comfort() {
	int levelComfort = 1;
	cout << "Metro comfort level = " << levelComfort << endl;
}