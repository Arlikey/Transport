#include <iostream>
#include "Transport.h"
#include "Bus.h"
#include "Car.h"
#include "Train.h"
#include "Metro.h"
using namespace std;

int main() {

	const int countOfTransport = 4;

	Transport* transport[countOfTransport] = {
		new Car(1250, 180, 60, 1500, 25, 3), 
		new Bus(3000, 140, 50, 750, 10, 25), 
		new Metro(12500, 80, 60, 50, 6, 300), 
		new Train(14000, 160, 140, 300, 8, 450)
	};

	int summa;
	cout << "Enter your summa: ";
	cin >> summa;

	int distance;
	cout << "Enter distance: ";
	cin >> distance;

	system("cls");

	cout << "List of available transport: " << endl;

	for (size_t i = 0; i < countOfTransport; i++)
	{
		if (summa >= ( transport[i]->GetCostTravel() * (distance/100) ) )
		{
			cout << "\n  " << "Transport #" << i+1 << endl << endl;
			transport[i]->Show();
		}
	}

	int userChoice;
	cout << "\n(To choose enter transport number)";
	cout << "\nYour choise is ";
	cin >> userChoice;

	system("cls");

	if (userChoice > countOfTransport || userChoice <= 0) {
		cout << "Error" << endl;
		return -1;
	}

	cout << "You arrived to destination." << endl;
	cout << "Left summa: " << summa - transport[userChoice-1]->GetCostTravel() * (distance / 100) << endl;

	for (size_t i = 0; i < countOfTransport; i++)
	{
		delete transport[i];
	}

	return 0;
}