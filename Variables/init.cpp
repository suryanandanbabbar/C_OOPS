#include <iostream>

int main()
{
    // Assignment Initialisation
    int variable = 10;

    // Variable may contain random garbage value. WARNING
    int elephant_count;

    int lion_count{}; // Initializes to 0

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    // 2.9  is of type double, with a wider range than int. ERROR or WARNING
    int narrowing_conversion{2.9}; // Error
}