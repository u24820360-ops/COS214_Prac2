#include <iostream>
#include "Traveller.h"
#include "Region.h"
#include "Map.h"
#include "Location.h"

#include <vector>
using namespace std;

int main()
{

	// move the traveller
	Traveller *traveller = new Traveller();
	int moveCount = 200;
	for (int i = 0; i < moveCount; i++)
	{
		traveller->move();
	}

	Map* earth=new Region("Earth");
	Map* africa=new Region("Africa");
	Map* sa=new Region("South Africa");
	
	Map* gauteng=new Region("Gauteng");
	gauteng->add(new Location("Pretoria"));
	gauteng->add(new Location("Johannesburg"));
	
	Map* wc = new Region("Western Cape");
	wc->add(new Location("Cape Town"));
	wc->add(new Location("Stellenbosch"));
	
	Map* egypt=new Region("Egypt");
	egypt->add(new Location("Cairo"));
	
	
	sa->add(gauteng);
	sa->add(wc);
	sa->add(new Location("Kruger National Park"));
	
	africa->add(sa);
	africa->add(egypt);
	
	earth->add(africa);
	earth->display();
	
	
	delete earth;
	earth=nullptr;
	
	delete traveller;
	traveller=nullptr;
	return 0;
}