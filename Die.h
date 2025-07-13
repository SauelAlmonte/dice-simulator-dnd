// Specification file for Die Class.
#ifndef DIE_H
#define DIE_H
class Die
{
    private:
        int sides;              // Number of Sides.
        int value{};              // The die's value.
    public:
        explicit Die(int = 6);  // Constructor.
        void roll();            // Rolls the die.
        int getSides() const;         // Returns the number of sides.
        int getValue() const;         // Returns the die's value

};
#endif
