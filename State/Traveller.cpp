#include "Traveller.h"
#include "MovementState.h"
#include "Map.h"
#include "Walk.h"


using namespace std;

Traveller::Traveller() 
{
	// this->map=nullptr;
	this->state=new Walk();
	this->tachyons=20;
	this->velocity=1;
}

Traveller::~Traveller() 
{
	// delete this->map;
	// this->map=nullptr;
	
	delete this->state;
	this->state=nullptr;
}


	void Traveller::setState(MovementState *state) 
	{
		delete this->state; //clean
		this->state=state;
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
		this->tachyons=count;	
	}
		
	int Traveller::getVelocity() 
	{
		return this->velocity;
	}
	
	void Traveller::setVelocity(int velocity ) 
	{
		this->velocity = velocity;
	}
	
	string Traveller::getMode() 
	{
		return this->state->getMode();
	}