#include "person.h"

double person::rate(double number)
{
    rating = number;

    return number;
}

void person::setStratum()
{
    
}

/**/
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

