#pragma once
#include <string>
class Movie
{
private:
	 std::string name;
	 std::string rating;
	 int watched;
public:
	 void set_name(std::string n);
	 void set_rating(std::string r);
	 std::string get_name();
	 std::string get_rating();



 
};

