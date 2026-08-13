#include "Teleport.h"

void Teleport::move(Traveller *traveller)
{
	if (!traveller->canTeleport())
	{
		if (!traveller->canDash())
			traveller->setState(new Dash());
		else
			traveller->setState(new Foot());
	}
	traveller->setTachyons(traveller->getTachyons() - 3);
	traveller->setVelocity(0);
}

string Teleport::getMode() { return "Teleporting"; }
