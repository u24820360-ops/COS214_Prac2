#include "Traveller.h"

#include "MovementState.h"
#include "Map.h"
#include "Walk.h"
#include "Swim.h"
#include "Teleport.h"
using namespace std;
Traveller::Traveller(string name)
{
	this->name = name;
	// this->map=nullptr;
	this->state = new Walk();
	this->tachyons = 20;
	this->velocity = 1;
	this->onWater = false;
}

Traveller::~Traveller()
{
	//map is deleted else where externally
}

int Traveller::chooseMode()
{
	cout << "How do you plan to move? " << endl
		 << "1. Walk " << endl
		 << "2. Dash " << endl
		 << "3. Teleport " << endl
		 << "4. Swim " << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 2:
		if (!this->canDash())
		{
			cout << "Not enough tachyons, wallk and collect more to be able to dash" << endl;
			break;
		}
		this->setState(new Dash());
		break;
	case 3:
		if (!this->canTeleport())
		{
			cout << "You do no have enough tachyons or your speed is not enough to Teleport" << endl;
			break;
		}
		this->setState(new Teleport());
		break;
	case 4:
		if (!this->canSwim())
		{
			cout << "You are not on water" << endl;
			break;
		}
		this->setState(new Swim());
		break;

	default:
		this->setState(new Walk());
	}
	return choice;
}

// print the travellers current location
void Traveller::print()
{
	cout << name << endl;
	cout << "Tachyon count: " << this->getTachyons() << endl;
	cout << "Speed: " << this->getVelocity() << endl;
	cout << "Continue " << getMode() << " and explore the vast lands of this world"<< endl;
	if (current != nullptr)
	{
		cout << "You are somewhere called: "<<endl;
		current->display();
		current->getBiome()->generate();
		current->getNpc()->generate();
		current->getObstacle()->generate();
		cout << endl;
	}

	else
	{
		cout << "Location: nowhere" << endl;
	}
}

void Traveller::setState(MovementState *state)
{
	delete this->state; // clean
	this->state = state;
}

void Traveller::move()
{
	this->state->move(this);
}

bool Traveller::canDash()
{
	return this->tachyons >= 10;
}

bool Traveller::canTeleport()
{
	return this->tachyons >= 3 && this->velocity >= 21;
}

int Traveller::getTachyons()
{
	return this->tachyons;
}

void Traveller::setTachyons(int count)
{
	this->tachyons = count;
}

int Traveller::getVelocity()
{
	return this->velocity;
}

void Traveller::setVelocity(int velocity)
{
	this->velocity = velocity;
}

string Traveller::getMode()
{
	return this->state->getMode();
}

string Traveller::getName()
{
	return this->name;
}

bool Traveller::canSwim() { return this->onWater; }

// void Traveller::beginTravel(Map *place)
// {
// 	this->current = place;
// }
Map *Traveller::getLocation()
{
	return this->current;
}
void Traveller::setLocation(Map *place)
{
	this->current = place;
}