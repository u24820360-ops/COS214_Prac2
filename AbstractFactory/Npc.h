#ifndef NPC_H
#define NPC_H

#include <string>
#include <iostream>

using namespace std;

class Npc {
public:
    virtual ~Npc() {};
    virtual void generate() = 0;
};

#endif