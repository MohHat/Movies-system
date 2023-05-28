#include "Movie.h"


void Movie::set_name(std::string n)
{
    name = n;
   
}
void Movie::set_rating(std::string r)
{
    rating = r;
   
}


 std::string Movie::get_name()
 {
     return name;
 }
 std::string Movie::get_rating()
 {
     return rating;
 }
