#include "WorldManager.h"

using namespace std;

#include "WorldManager.h"

using namespace std;
WorldManager::WorldManager(string csv)
{
	this->world = this->createWorld(csv);
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

Map *WorldManager::createWorld(string csvPath)
{
	ifstream file(csvPath.c_str());
	if (!file.is_open())
	{
		cout << "Could not open " << csvPath << endl;
		return nullptr;
	}

	Map *world = new Region("Pretoria");

	string line;
	getline(file, line); // skip header

	while (getline(file, line))
	{
		if (line.empty())
			continue;

		stringstream ss(line);
		string category, suburb, name;
		getline(ss, category, ',');
		getline(ss, suburb, ',');
		getline(ss, name);

		Map *place = new Location(name);

		if (category == "university")
			place = new University(place);
		else if (category == "fuel")
			place = new FuelStation(place);
		else if (category == "attraction")
			place = new TouristAttraction(place);
		// street stays a plain Location

		world->add(place);
	}
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