#pragma once
class Phone {


	char* name;
	float nr_of_stars;
	float price;
	float user_rating;
	float avg;
public:

	void SetName(char * name);
	char* GetName();
	void SetNrStars(float nr);
	float GetNrStars();
	void SetUserRating(float rating);
	float GetUserRating();
	float GetAvg();
	void SetPrice(float price);
	float GetPrice();
};