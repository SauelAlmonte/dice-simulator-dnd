// Implementation file for the Die class.
#include <cstdlib>
#include <ctime>
#include "Die.h"
using namespace std;

/*
 * The constructor accepts an argument for the number
 * of sides for the die, and performs a roll.
 */
Die::Die(int numSides)
{
    // Get the system time.
    unsigned seed = time(nullptr);

    // Seed the random number generator.
    srand(seed);

    // Set the number of sides.
    sides = numSides;

    // Perform an initial roll.
    roll();
}

/*
 * The roll member function simulates the rolling of the die.
 */
void Die::roll()
{

    // Constant for the minimum die value.
    constexpr int MIN_VALUE = 1; // Minimum die value.

    // Get a random value for the die.
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

/*
 * The getSides member function returns the number of this die.
 */
int Die::getSides() const
{
    return sides;
}

/*
 * The getValue member function returns the die's value.
 */
int Die::getValue() const
{
    return value;
}
