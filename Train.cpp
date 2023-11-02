#include "Train.h"
#include <iostream>
using namespace std;

Train::Train(double weight, double max_speed, double average_speed, double cost_travel, int number_of_wagons,
	int passengers_count) : Transport(weight, max_speed, average_speed, cost_travel) {
	this->number_of_wagons = number_of_wagons;
	this->passengers_count = passengers_count;
};

void Train::SetNumberOfWagons(int number_of_wagons) {
	this->number_of_wagons = number_of_wagons;
};
void Train::SetPassengersCount(int passengers_count) {
	this->passengers_count = passengers_count;
};

int Train::GetNumberOfWagons() {
	return number_of_wagons;
};
int Train::GetPassengersCount() {
	return passengers_count;
};

void Train::Show() {
	cout << "Weight: " << weight << endl;
	cout << "Max Speed: " << max_speed << endl;
	cout << "Average Speed: " << average_speed << endl;
	cout << "Cost Travel: " << cost_travel << endl;
	cout << "Number Of Wagons: " << number_of_wagons << endl;
	cout << "Passengers Count: " << passengers_count << endl;
};

void Train::Comfort() {
	int levelComfort = 3;
	cout << "Train comfort level = " << levelComfort << endl;
}