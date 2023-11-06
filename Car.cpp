#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(double weight, double max_speed, double average_speed, double cost_travel, double max_luggage,
		int passengers_count)
		: Transport(weight, max_speed, average_speed, cost_travel) {
	this->max_luggage = max_luggage;
	this->passengers_count = passengers_count;
	segment = 0;
	body_type = "\0";
	seat_upholstery = "\0";
};

void Car::SetMaxLuggage(double max_luggage) {
	this->max_luggage = max_luggage;
};
void Car::SetSegment(char segment) {
	this->segment = segment;
};
void Car::SetBodyType(string body_type) {
	this->body_type = body_type;
};
void Car::SetPassengersCount(int passengers_count) {
	this->passengers_count = passengers_count;
};
void Car::SetSeatUpholstery(string seat_upholstery) {
	this->seat_upholstery = seat_upholstery;
};

double Car::GetMaxLuggage() {
	return max_luggage;
};
char Car::GetSegment() {
	return segment;
};
string Car::GetBodyType() {
	return body_type;
};
int Car::GetPassengersCount() {
	return passengers_count;
};
string Car::GetSeatUpholstery() {
	return seat_upholstery;
};

void Car::Show() {
	cout << "\tCAR" << endl << endl;
	cout << "Weight: " << weight << " kg" << endl;
	cout << "Max Speed: " << max_speed << " km/h" << endl;
	cout << "Average Speed: " << average_speed << " km/h" << endl;
	cout << "Cost Travel: " << cost_travel << "$" << endl;
	cout << "Max Luggage: " << max_luggage << " kg" << endl;
	cout << "Segment: " << segment << endl;
	cout << "Body Type: " << body_type << endl;
	cout << "Passengers Count: " << passengers_count << endl;
	cout << "Seat Upholstery: " << seat_upholstery << endl;
};

void Car::Comfort() {
	int levelComfort = 10;
	cout << "Car comfort level = " << levelComfort << endl;
}