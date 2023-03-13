#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
	string name;
	string owner;
	string breed;
	int weight;
};

class Song {
public:
	string name;
	string genre;
	float length;
	int rating;

};

int main()
{
	Cat myfriend;
	myfriend.name = "Feliks";
	myfriend.owner = "Martyna";
	myfriend.breed = "dachowiec";
	myfriend.weight = 4;

	Song fav;
	fav.name = "Last Christmas";
	fav.genre = "pop";
	fav.length = 3.14;
	fav.rating = 10;

	cout << fav.name;

}
