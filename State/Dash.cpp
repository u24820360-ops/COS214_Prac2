#include "Dash.h"
#include "Traveller.h"


Dash::Dash() 
{
	
}
Dash::~Dash() 
{
	
}
using namespace std;
void Dash::move(Traveller* traveller) 
{
	//can the user dash, got back to walking if not
	if(!traveller->canDash()) 
	{
		traveller->setState(new Walk());
		return;
	}
	
	cout << traveller->getMode() <<endl;
	traveller->setTachyons(traveller->getTachyons() - 2);
	traveller->setTachyons(traveller->getTachyons() + 1);
	traveller->setVelocity(traveller->getVelocity()*2);
	
	if(traveller->canTeleport()) 
	{
		traveller->setState(new Teleport());
	}
}

string Dash::getMode() 
{
	return "Dashing";
}