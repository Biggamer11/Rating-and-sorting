#include "person.h"

double person::rate(double number)
{
    rating = number;

    return number;
}

void person::setStratum()
{
    
}

// Constructor initializes a person with an ID and starting rating.
// The votes map collects ratings keyed by voter ID.
person::person(int id, double number)
{
    pid = id;
    rating = number;
    if (rating == 6)
    {
        stratum = 5;
    }
    else {
        stratum = (int) floor(rating);
    }
    setStratum();
}

