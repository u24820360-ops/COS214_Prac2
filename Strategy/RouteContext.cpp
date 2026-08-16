#include "RouteContext.h"

#include "Fastest.h"
#include "Safest.h"
#include "Shortest.h"

using namespace std;

RouteContext::RouteContext(RouteStrategy *s)
{
	if (!s)
		RouteContext();
	else
		this->strategy = s;
}

RouteContext::RouteContext()
{
	this->strategy = new Safest();
}

void RouteContext::setStrategy(RouteStrategy *s)
{
	delete this->strategy;
	if (s)
	{
		this->strategy = s;
	}
	else
	{
		this->strategy = new Safest();
	}
}

void RouteContext::execute()
{
	this->strategy->routing();
}

RouteContext::~RouteContext()
{
	delete this->strategy;
	this->strategy = nullptr;
}

void RouteContext::chooseRoute()
{
	cout << "Worthy Traveller! Choose your route, if you so dare!" << endl
		 << "1. Fastest [Time is of the essence...]" << endl
		 << "2. Shortest [Might not be the quickest but the distance is certainly the shortest...]" << endl
		 << "3. Safest [Only a weakling would choose the path most travelled...]" << endl;

	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		this->setStrategy(new Fastest());
		cout << "Your chosen path is The Fastest." << endl;
		break;

	case 2:
		this->setStrategy(new Shortest());
		cout << "Your chosen path is The Shortest." << endl;
		break;

	default:
		this->setStrategy(new Safest());
		cout << "You have chosen The Safest path weakling!" << endl;
		break;
	}
}