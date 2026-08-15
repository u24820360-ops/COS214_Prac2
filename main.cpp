#include <iostream>
#include "Traveller.h"
#include "Region.h"
#include "Map.h"
#include "Location.h"
#include "MapDecorator.h"
#include "FuelStation.h"
#include "University.h"
#include "TouristAttraction.h"
#include "WorldManager.h"

#include <vector>
using namespace std;

int main()
{

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
	Traveller* tr2=new Traveller("Micheal");
	WorldManager* world=new WorldManager();
	tr2->beginTravel(world->getWorld());
	world->moveTraveler(tr2);
	world->moveTraveler(tr2);
	world->moveTraveler(tr2);
	world->moveTraveler(tr2);
	// world->display();
	delete world;
	return 0;
}