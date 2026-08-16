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
	return 0;

	// // move the traveller
	// Traveller *traveller = new Traveller("Patrick");
	// int moveCount = 200;
	// for (int i = 0; i < moveCount; i++)
	// {
	// 	traveller->move();
	// }

	// //MAP COMPOSITE
	// Map* earth=new Region("Earth");
	// Map* africa=new Region("Africa");
	// Map* sa=new Region("South Africa");
	
	// Map* gauteng=new Region("Gauteng");
	// gauteng->add(new Location("Pretoria"));
	// gauteng->add(new Location("Johannesburg"));
	
	// Map* wc = new Region("Western Cape");
	// wc->add(new Location("Cape Town"));
	// wc->add(new Location("Stellenbosch"));
	
	// Map* egypt=new Region("Egypt");
	// egypt->add(new Location("Cairo"));
	
	
	// sa->add(gauteng);
	// sa->add(wc);
	// sa->add(new Location("Kruger National Park"));
	
	// africa->add(sa);
	// africa->add(egypt);
	
	// earth->add(africa);
	// earth->display();
	
	
	// delete earth;
	// earth=nullptr;
	
	// delete traveller;
	// traveller=nullptr;
	
	
	// //MAP DECORATIOR
	// Map* pretoria=new Region("Pretoria");
	// Map* h1= new Location("Hatefield");

	// Map* h2 = new Location("Hilcrest");
	// pretoria->add(h1);
	// pretoria->add(h2);
	// Map* d1=new FuelStation(h1);
	// Map* d2=new University(h2);
	// Map* d3=new TouristAttraction(pretoria);
	
	// d1->display();
	// d2->display();
	// d3->display();
	RouteContext *rc = new RouteContext(new Fastest());
	Traveller* tr2=new Traveller("Micheal");
	WorldManager* wm=new WorldManager();
	wm->run(tr2, rc);
	// wm->display();
	delete wm;
	delete rc;
	delete tr2;
	return 0;
}