#include "Phone.h"

void Phone::SetName(char* name)
{
    this->name = name;
}

char* Phone::GetName()
{
    return this->name;
}

void Phone::SetNrStars(float nr)
{
    this->nr_of_stars = nr;
}

float Phone::GetNrStars()
{
    return this->nr_of_stars;
}

void Phone::SetUserRating(float rating)
{ 
    this->user_rating = rating;
}

float Phone::GetUserRating()
{
    return this->user_rating;
}

float Phone::GetAvg()
{
    float avg;
    avg = (float)(this->price / this->nr_of_stars);
    return avg;

}

void Phone::SetPrice(float price)
{
    this->price = price;
}

float Phone::GetPrice()
{
    return this->price;
}
