#include "WorldManager.h"
#include "WorldManager.h"
using namespace std;

WorldManager::WorldManager()
{
	this->world = this->createWorld();
}

WorldManager::~WorldManager()
{
	delete this->world;
	this->world = nullptr;
}

Map *WorldManager::getWorld()
{
	return this->world;
}

Map *WorldManager::createWorld()
{
	WorldBuilder *forest = new ForestBuilder();
	WorldBuilder *city = new CityBuilder();
	WorldBuilder *desert = new DesertBuilder();
	WorldBuilder *ocean = new OceanBuilder();
	WorldBuilder *nether = new NetherBuilder();
	Map *world = new Region("Pretoria", nullptr);
	world->add(new University(new Location("UP Hatfield Campus", forest)));
	world->add(new University(new Location("UP Mamelodi Campus", city)));
	world->add(new University(new Location("UP Onderstepoort Campus", desert)));
	world->add(new TouristAttraction(new Location("Voortrekker Monument", ocean)));
	world->add(new TouristAttraction(new Location("Union Buildings", nether)));
	world->add(new TouristAttraction(new Location("Rietvlei Nature Reserve", forest)));
	world->add(new TouristAttraction(new Location("Hazel Food Market", desert)));
	world->add(new FuelStation(new Location("Sasol Hatfield", nether)));
	world->add(new FuelStation(new Location("Shell Varsity Motors", desert)));
	world->add(new FuelStation(new Location("Engen Hatfield", forest)));
	delete forest;
	delete city;
	delete desert;
	delete ocean;
	delete nether;
	return world;
}
bool WorldManager::moveTraveler(Traveller *traveller)
{
	if (traveller == nullptr || this->world == nullptr)
		return false;

	vector<Map *> places = world->getChildren();
	if (places.empty())
		return false;

	Map *here = traveller->getLocation();
	cout << "Currently where? : " << endl;
	if (here != nullptr)
	{
		cout << here->getName() << endl;
		cout << "Are you trying to go somewhere? simply Walk, Dash, Swim or teleport to that location"
			 << endl
			 << endl;
	}
	else
	{
		cout << "nowhere" << endl;
	}

	for (size_t i = 0; i < places.size(); i++)
		cout << i << ": " << places[i]->getName() << endl;

	int choice;
	cin >> choice;
	if (choice < 0 || choice >= (int)places.size())
		return false;
	traveller->chooseMode();
	traveller->setLocation(places[choice]);
	traveller->move();	// mode only
	traveller->print(); // new place name
	return true;
}

int WorldManager::promptTraveller(Traveller *traveller)
{
	cout << "Select an action to perform" << endl;
	cout << "1. Quit exploration" << endl
		 << "2. Continue exploring" << endl;

	string input;
	cin >> input;
	return std::stoi(input);
}

void WorldManager::run(Traveller *traveller)
{
	if (traveller)
	{
		if (!traveller->getLocation())
			traveller->setLocation(this->world);
		while (this->promptTraveller(traveller) == 2)
		{
			this->moveTraveler(traveller);
		}
	}
}