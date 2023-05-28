#pragma once
#include<vector>
#include"Movie.h"
class Movies
{
private:
	std::vector<Movie> movs;
public:
	void add_movie(std::string Mname, std::string Mrating);
	void display_movies();

};

