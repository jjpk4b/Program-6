//Joe Parsa
//Program 6
//12/13/2020


#pragma once
#include <deque>
#include <string>
#include <iostream>

using namespace std;

struct Car {
	string name, model, plate;
};

class Queue {
private:
	deque <Car> cDeque;
	deque <Car>::iterator vipIdx;

public:
	Queue() { vipIdx = cDeque.begin(); }
	void addCar(Car c);
	void addVipCar(Car v);
	void auctionCar();
	void cancelCar(Car c);
	void listCars();
};