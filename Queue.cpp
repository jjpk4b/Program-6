//Joe Parsa
//Program 6
//12/13/2020


#include "Queue.h"

void Queue::addCar(Car c)
{
    cDeque.push_back(c);
}

void Queue::addVipCar(Car v)
{
    if (vipIdx == cDeque.begin())
        cDeque.push_front(v);
    else {
        cDeque.insert(vipIdx, v);
        ++vipIdx;
    }

}

void Queue::auctionCar()
{
    if (cDeque.empty())
        cout << "No more cars" << endl;
    else
        cout << cDeque[0].name << " " << cDeque[0].model << " " << cDeque[0].plate << endl;
}

void Queue::cancelCar(Car c)
{
    for (deque <Car>::iterator it = cDeque.begin(); it != cDeque.end(); it++) {
        if (it->name == c.name && it->model == c.model && it->plate == c.plate) {
            cDeque.erase(it);
        }
        else
            cout << "Car does not exist." << endl;
    }
}

void Queue::listCars()
{
    for (deque <Car>::iterator it = cDeque.begin(); it != cDeque.end(); it++) {
        cout << it->name << " " << it->model << " " << it->plate << endl;
    }
}

