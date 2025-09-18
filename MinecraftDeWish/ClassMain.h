#pragma once
#include <iostream>
#include <vector>

class Position
{
public:
	Position() 
	{
		_positionX = 0;
		_positionY = 0;
		_positionZ = 0;
	}

	Position(int x, int y, int z ) : _positionX(x),
									 _positionY(y),
									 _positionZ(z){
	}
	void SetX(int x)
	{
		_positionX = x;
	}

	void SetY(int y)
	{
		_positionY = y;
	}

	void SetZ(int z)
	{
		_positionZ = z;
	}

	int getX()
	{
		return _positionX;
	}

	int getY()
	{
		return _positionY;
	}

	int getZ()
	{
		return _positionZ;
	}

protected:
	int _positionX;
	int _positionY;
	int _positionZ;

private:

};

class HealthPoint
{
public:
	HealthPoint(int hp) : _hp(hp) {}

	int getHp()
	{
		return _hp;
	}

	void setHp(int hp)
	{
		_hp = hp;
	}

private:
	int _hp;
};


//blocks
class Blocks
{
public:
	Blocks() {}

private:

};

class truc
{
public:
	truc() {}

private:

};

// player
class Player : public Position, public HealthPoint
{
public:
	Player(HealthPoint hp, int x, int y, int z) : Position(x, y, z), HealthPoint(hp) {
	}
	void display()
	{
		std::cout << "Players HP : " << getHp() << "\n" << "Players Position : " << getX() << " " << getY() << " " << getZ() << "\n";
	}

private:$
	int _maxInvetorySize = 10;
	std::vector<int> _inventory;
};


// skeleton
class skeleton
{
public:
	skeleton() {}

private:

};



// zombies
class zombie
{
public:
	zombie() {}

private:

};


// chicken
class Chiken
{
public:
	Chiken() {}

private:

};
