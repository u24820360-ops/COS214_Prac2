#include "Walk.h"
#include "Traveller.h"

using namespace std;

Walk::Walk() 
{
	
}

Walk::~Walk() {}

void Walk::move(Traveller* traveller) 
{
	cout << this->getMode() << endl;
	traveller->setTachyons(traveller->getTachyons() + 1);
	traveller->setVelocity(traveller->getVelocity() + 1);
	// if(traveller->canDash()) 
	// {
	// 	//change the state
	// 	traveller->setState(new Dash());
	// }
}

string Walk::getMode() 
{
	return "walking";
}