#include<iostream>
#include<semaphore.h>
#include<string>



using namespace std;

class Philosopher: public thread
{
public:
	State state;
	int total;
	int id;
	string name;

	Chopstick  left;
	Chopstick right;

	Syncro* syncro;
	float thinking;
	float hungry;
	float eat;

	Philosopher(string n, int i, Syncro* s, int t);
};

Philosopher::Philosopher(int s, int i) {
	state = s;
	id = i;
}

class Syncro
{
public:
	int index;

	Syncro(int n);
	void putDownChopstick(int ii);
	void pickUpChopstick(int i);
	
	static int state[5];
};