#include<iostream>
#include<semaphore.h>
#include<string>



using namespace std;

class Philosopher
{
	int state;
	int id;
	string name;

	Chopstick  left;
	Chopstick right;

public:
	Philosopher(int, int);
};

Philosopher::Philosopher(int s, int i) {
	state = s;
	id = i;
}

class Syncro
{
	static s
		emaphore chopstick[N];
	static int state[5];
};