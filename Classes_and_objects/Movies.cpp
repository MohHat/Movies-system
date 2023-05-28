#include "Movies.h"
#include <iostream>
void Movies::add_movie(std::string n, std::string r)
{
	Movie new_m;

	new_m.set_name(n);
	new_m.set_rating(r);
	movs.push_back(new_m);
}
void Movies::display_movies()
{
	int num = 1;
	Movie details;

	std::cout << "----Movies list----" << '\n';
	for (auto each: movs) {
		
		std::cout << num << "- name: " << each.get_name() << '\n';
		std::cout << "rating: " << each.get_rating() << '\n';
		num++;
	}
	std::cout << "-------------------" << '\n';
}