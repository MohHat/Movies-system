#include "Movies.h"
#include<iostream>
int main()
{
	Movies list;
	std::string movie_name;
	std::string rating;
	std::string choice;
	bool is_on = true;
	while (is_on)
	{
		std::cout << "Enter movie name: ";
		std::cin >> movie_name;
		std::cout << "Enter movie rating: ";
		std::cin >> rating;
		list.add_movie(movie_name, rating);
		std::cout << "Do you want to display the movie list? (yes/no)" << '\n';
		std::cin >> choice;
		for (char &c : choice)
		{
			c = std::tolower(c);
		}
		if(choice == "yes")
		{
			list.display_movies();
		} 
		else if(choice == "no"){
			is_on = false;
		}
		else {
			std::cout << "This is not a command. Try again using yes or no" << '\n';
		
		}

	}

}