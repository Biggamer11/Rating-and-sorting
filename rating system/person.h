#pragma once
#include <vector>
#include <math.h>
#include <iterator> 
#include <map> 


class person
{
public:
    int pid;
    double rating = 0;
    int stratum = 0;

    /*
        Map storing voter IDs and the corresponding
        double rating each voter has assigned.
    */
    std::map<int, double> votes;

    double rate(double number);
    void setStratum();
    person(int id, double number);

    bool operator<(const person& val) const {
        return rating < val.rating;
    }



private:

};

