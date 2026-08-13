#include "Dash.h"

void Dash::move(Traveller* traveller) 
{
	if(!traveller->canDash()) 
	{
		traveller->setState(new Foot());
		return;
	}
	
	traveller->setTachyons(traveller->getTachyons() - 1);
	traveller->setVelocity(traveller->getVelocity() + 2);
	
	if(traveller->canTeleport()) 
	{
		traveller->setState(new Teleport());
	}
}

string Dash::getMode() 
{
	return "Dashing";
}