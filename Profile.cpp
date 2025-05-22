#include <string>
#include "Profile.hpp"

using namespace std;

// Constructors
Profile::Profile(int newAge, string newName, string newCity, string newCountry, string newPronouns)
	: age(newAge), name(newName), city(newCity), country(newCountry), pronouns(newPronouns) {};

// Getters


// Setters


// Methods
bool Profile::isWhitespaceOnly(string str) {
	return all_of(str.begin(), str.end(), ::isspace);
}

string Profile::viewProfile() {
	string outputString;

	outputString = "Profile Information";
	outputString += "\nAge: " + age;
	outputString += "\nName: " + name;
	outputString += "\nCity: " + city;
	outputString += "\nCountry: " + country;
	outputString += "\nPronouns: " + pronouns;
	outputString += "\nHobbies: ";

	// Loop hobbies and display them
	for (int x = 0; x < hobbies.size(); x++) {
		outputString += hobbies[x];
		
		// Print comma and space if not last element
		if (x != hobbies.size() - 1) {
			outputString += ", ";
		}
	}

	outputString += "\n\n";

	return outputString;
}

//template <typename First, typename... Rest>
//void Profile::addHobbies(const First& first, const Rest&... rest) {
//	// Validation check against empty strings
//	if (!isWhitespaceOnly(first)) {
//		hobbies.push_back(first);
//	}
//	addHobbies(rest...);
//}
//
//void Profile::addHobbies() {
//
//}