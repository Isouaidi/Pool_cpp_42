#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>


class Zombie
{
	private :

	std::string name ;

	public :

	void announce(void);

	Zombie(void);
	void zombie(std::string name);
	~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif