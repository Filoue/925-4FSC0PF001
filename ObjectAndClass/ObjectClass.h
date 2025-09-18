#include <vector>
#include <string>

#pragma once

class Ennemy
{
public:
	Ennemy(int startHP) 
	{
		_hp = startHP;
	}

	virtual void Attack() { std::cout << "ATTACK " << _hp <<"\n"; }
private:
	int _hp;

protected:
	int _damageDone;
};

class Dog : public Ennemy
{
public:
	Dog(int startHP, int teleportDistance) : Ennemy(startHP) 
	{
		_teleportDistance = teleportDistance;
	}

	void Attack()
	{
		Teleport();
		Ennemy::Attack();
	}

	void Teleport() { std::cout << "teleported by " << _teleportDistance << " "; }

private:
	int _teleportDistance;
};

class Knight : public Ennemy
{
public:
	Knight(int startHP) : Ennemy(startHP) {}

	void Counter() {}
private:

};



