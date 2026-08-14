#include "Swim.h"
#include "Traveller.h"

using namespace std;

Swim::Swim() 
{
	
}

Swim::~Swim() {}

void Swim::move(Traveller* traveller) 
{
	if(traveller->canSwim()) 
	{
		//change the state
		traveller->setState(new Walk());
	}
	cout << this->getMode() << endl;	
}

string Swim::getMode() 
{
	return "Swiming";
}