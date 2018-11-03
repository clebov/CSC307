#include<iostream>

using namespace std;


void setSimulationParameters(int& sTime, int& numOfServers, int& transTime, int& tBetweenCArrival)
{
	cout << "Enter the simulation time: ";
	cin >> sTime;
	cout << endl;

	cout << "Enter the number of SErvers: ";
	cin >> numOfServers;
	cout << endl;

	cout << "Enter the treansaction time: ";
	cin >> transTime;
	cout << endl;

	cout << "Enther the time between customer arrivals: ";
	cin >> tBetweenCArrival;
	cout << endl;

}

void runSimulation()