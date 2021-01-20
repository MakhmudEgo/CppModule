//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <iostream>

class Enemy {
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& enemy);
	Enemy& operator=(const Enemy& enemy);
	virtual ~Enemy();
	const std::string& getType() const;
	int getHP() const;
	virtual void takeDamage(int);
private:
	int _HP;
	std::string _Type;
};

#endif //ENEMY_HPP
