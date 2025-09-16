#pragma once

enum class Monster
{
	TROLL,
	ELF,
	DRAGON,
	HUMAIN,
	ORC,
	KAYOUX,

	MonsterSize
};

enum class Attack
{
	ATTACK,
	PROTECT,
	HEAL,
	QUIT,

	AttackSize
};

std::string ChooseClass(Monster monster)
{
	switch (monster){
	case Monster::TROLL:
		return "Troll";
	case Monster::ELF:
		return "Elf";
	case Monster::DRAGON:
		return "Dragon";
	case Monster::HUMAIN:
		return "Humain";
	case Monster::ORC:
		return "Orc";
	case Monster::KAYOUX:
		return "Kayoux";
	default:
		return "you need to choose a monster in range your little shit.\n";
	}
}

std::string ChooseAttack(Attack attack)
{
	switch (attack)
	{
	case Attack::ATTACK:
		return "you make damage.\n";
	case Attack::PROTECT:
		return "you protect your self.\n";
	case Attack::HEAL:
		return "you heal your self.\n";
	case Attack::QUIT:
		return "you got kick from the game\n";
	default:
		return "you need to choose in range your little shit.\n";
	}
}