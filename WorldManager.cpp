#include "WorldManager.h"

using namespace std;

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

Map* WorldManager::createWorld()
{
	WorldBuilder* forest = new ForestBuilder();
	WorldBuilder* city = new CityBuilder();
	WorldBuilder* desert = new DesertBuilder();
	WorldBuilder* ocean = new OceanBuilder();
	WorldBuilder* nether = new NetherBuilder();
	Map* world = new Region("Pretoria", city);
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
bool WorldManager::moveTraveler(Traveller *t)
{
	if (t == nullptr || this->world == nullptr)
		return false;

	vector<Map *> places = world->getChildren();
	if (places.empty())
		return false;

	Map *here = t->getLocation();
	cout << "You are at: ";
	if (here != nullptr)
		cout << here->getName() << endl;
	else
		cout << "nowhere" << endl;

	for (size_t i = 0; i < places.size(); i++)
		cout << i << ": " << places[i]->getName() << endl;

	int choice;
	cin >> choice;
	if (choice < 0 || choice >= (int)places.size())
		return false;
	t->chooseMode();
	t->setLocation(places[choice]);
	t->move();	// mode only
	t->print(); // new place name
	return true;
}