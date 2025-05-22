#include <iostream>
#include "Profile.hpp"

using namespace std;

int main()
{
    // Create object
    Profile profile1(18, "Vic", "Syd", "AU", "He/Him");
    
    // Testing different arguments
    profile1.addHobbies();
    profile1.addHobbies("Gaming");
    profile1.addHobbies("");
    profile1.addHobbies("    ");
    profile1.addHobbies("Reading", "Walking", "Hobby1", "Hobby2", "Hobby3");

    // Print object details to console
    cout << profile1.viewProfile();
}
