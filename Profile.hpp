#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

class Profile
{
private:
	// Variables
	int age;
	string name;
	string city;
	string country;
	string pronouns;
	vector<string> hobbies;

public:
	// Constructors
	Profile(int newAge, string newName, string newCity,
		string newCountry, string newPronouns = "They/Them");

	// Getters
	int getAge();
	string getName();
	string getCity();
	string getCountry();
	string getPronouns();
	vector<string> getHobbies();

	// Setters
	void setAge(int newAge);
	void setName(string newName);
	void setCity(string newCity);
	void setCountry(string newCountry);
	void setPronouns(string newProunouns);
	void setHobbies(vector<string> newHobbies);

	// Methods
	bool isWhitespaceOnly(string str);
	string viewProfile();

	// Add multiple hobbies
	// Definition goes here because of variadic template reasons
	template <typename First, typename... Rest>
	void addHobbies(const First& first, const Rest&... rest) {
		// Validation check against empty strings
		if (!isWhitespaceOnly(first)) {
			hobbies.push_back(first);
		}
		addHobbies(rest...);
	}

	// Default function call when parameter pack is empty
	void addHobbies() {};
};