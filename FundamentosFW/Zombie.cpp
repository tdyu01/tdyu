#include "Zombie.h"



Zombie::Zombie()
{

}

void Zombie::init(float speed, glm::vec2 position) {
	_speed = speed;
	_position = position;
	ini_position = _position;
	ab = false;
}

void Zombie::update(const std::vector<std::string>& levelData,
	std::vector<Human*>& humans,
	std::vector<Zombie*>& zombies){

}

void Zombie::movement() {
	
	if (ini_position.y - 300 <= _position.y && !ab)
	{
		_position.y -= _speed;
	}
	else
	{
		ab = true;
	}
	
	if (ini_position.y >= _position.y && ab)
	{
		_position.y += _speed;
	}
	else
	{
		ab = false;
	}
}
Zombie::~Zombie()
{
}
