#include "Teleport.h"
#include "Traveller.h"

using namespace std;

Teleport::Teleport() 
{
	
}

Teleport::~Teleport() {}

void Teleport::move(Traveller *traveller)
{
	//is the user actually able to teleport? if not then dash
	if (!traveller->canTeleport()) 
	{
		traveller->setState(new Dash());
		return;
	}
	cout << traveller->getMode() <<endl;
	traveller->setTachyons(traveller->getTachyons()/2);
	traveller->setVelocity(0);
}

string Teleport::getMode() { return "Teleporting"; }
