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
		votes will go here to be tabulated later
		this will include the personID(pid)
		as well as a rating of the person making
		the vote.
	
	*/
        std::map<int, int> ToBeNamed;

	double rate(double number);
	void setStratum();
	person(int id, double number);

	bool operator<(const person& val) const {
		return rating < val.rating;
	}



private:

};

