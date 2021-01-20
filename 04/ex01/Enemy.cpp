//
// Created by Mahmud Jego on 1/20/21.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _HP(hp), _Type(type)
{
}

Enemy::~Enemy()
{

}

const std::string &Enemy::getType() const
{
	return (this->_Type);
}

int Enemy::getHP() const
{
	return (this->_HP);
}

void Enemy::takeDamage(int amount)
{
	if (amount > 0)
	{
		this->_HP -= amount;
	}
}

Enemy::Enemy(const Enemy &enemy)
{
	operator=(enemy);
}

Enemy &Enemy::operator=(const Enemy &enemy)
{
	if (this != &enemy)
	{
		this->_HP = enemy._HP;
		this->_Type = enemy._Type;
	}
	return (*this);
}
