#ifndef MOVEMENTSTATE_H
#define MOVEMENTSTATE_H
#include <string>
class Traveller;

class MovementState 
{
	public:
	virtual ~MovementState();
	virtual void move(Traveller*)=0;
	virtual std::string getMode()=0;
};

#endif