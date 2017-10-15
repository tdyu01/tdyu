#pragma once
#include "Agent.h"

class Zombie: public Agent
{
private:
	glm::vec2 ini_position;
	bool ab;
public:
	void init(float speed, glm::vec2 position);
	void update(const std::vector<std::string>& levelData,
		std::vector<Human*>& humans,
		std::vector<Zombie*>& zombies);
	Zombie();
	~Zombie();
	//void Update();
	void movement();
};

