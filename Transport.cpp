#include <iostream>
#include "Transport.h"
using namespace std;

Transport::Transport(double weight, double max_speed, double average_speed, double cost_travel) {
	this->weight = weight;
	this->max_speed = max_speed;
	this->average_speed = average_speed;
	this->cost_travel = cost_travel;
};

void Transport::SetWeight(double weight) {
	this->weight = weight;
};
void Transport::SetMaxSpeed(double max_speed) {
	this->max_speed = max_speed;
};
void Transport::SetAverageSpeed(double average_speed) {
	this->average_speed = average_speed;
};
void Transport::SetCostTravel(double cost_travel) {
	this->cost_travel = cost_travel;
};

double Transport::GetWeight() {
	return weight;
}

double Transport::GetMaxSpeed() {
	return max_speed;
}

double Transport::GetAverageSpeed() {
	return average_speed;
}

double Transport::GetCostTravel() {
	return cost_travel;
}