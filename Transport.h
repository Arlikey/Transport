#pragma once
class Transport
{
protected:
	double weight;
	double max_speed;
	double average_speed;
	double cost_travel;
public:
	Transport() = default;
	Transport(double weight, double max_speed, double average_speed, double cost_travel);

	void SetWeight(double weight);
	void SetMaxSpeed(double max_speed);
	void SetAverageSpeed(double average_speed);
	void SetCostTravel(double cost_travel);

	double GetWeight();
	double GetMaxSpeed();
	double GetAverageSpeed();
	double GetCostTravel();

	virtual void Show() = 0;

	virtual void Comfort() = 0;
};

