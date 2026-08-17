#include <iostream>
#include "Traveller.h"
#include "WorldManager.h"
#include "Map.h"
#include "Walk.h"
#include "Dash.h"
#include "Teleport.h"
#include "Swim.h"
#include "RouteContext.h"
#include "Fastest.h"
#include "Shortest.h"
#include "Safest.h"


#include <vector>
using namespace std;

int main()
{
	WorldManager* manager = new WorldManager();
	Map* world = manager->getWorld();
	world->display();
	Traveller* traveller = new Traveller("Micheal");
	traveller->setLocation(world);
	vector<Map*> places = world->getChildren();
	if (!places.empty()) {
		traveller->setLocation(places[0]);
		traveller->setState(new Walk());
		traveller->move();
		traveller->print();
		traveller->setLocation(places[places.size() - 1]);
		traveller->setState(new Dash());
		traveller->move();
		traveller->print();
	}
	RouteContext* rc0 = new RouteContext(new Fastest());
	rc0->execute();
	rc0->setStrategy(new Shortest());
	rc0->execute();
	rc0->setStrategy(new Safest());
	rc0->execute();
	delete rc0;
	delete traveller;
	delete manager;

	//Playable loop
	// RouteContext *rc = new RouteContext(new Fastest());
	// Traveller* tr2=new Traveller("Micheal");
	// WorldManager* wm=new WorldManager();
	// wm->run(tr2, rc);
	// // wm->display();
	// delete wm;
	// delete rc;
	// delete tr2;
	return 0;
}