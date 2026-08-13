#include "Foot.h"

using namespace std;

void Foot::move(Traveller* traveller) 
{
	traveller->setTachyons(traveller->getTachyons() + 1);
	traveller->setVelocity(traveller->getVelocity() + 0.000001);
	if(traveller->canDash()) 
	{
		//change the state
		traveller->setState(new Dash());
	}
}

string Foot::getMode() 
{
	return "walking";
}