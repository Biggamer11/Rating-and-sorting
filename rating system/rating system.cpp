// rating system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <random>
#include <tuple>
#include <map>
#include "person.h"

void createRandom(int numOfPeople);
void showRateings();
void showWeight();
void sortRateings();
void showStratum();
void simulateInteractions();
std::vector<person> p;

int main()
{
    createRandom(5000);
    sortRateings();
    showWeight();
    showStratum();
}

void showWeight() {
    for (double i = 0; i <= 6; i = i + 0.01) {
        double result = (std::exp2f(i) / 64) * 100;
        std::cout << "Input: " << i << " = " << result << "%\n";
    }
}


void sortRateings()
{
    std::cout << "Sorting...\n";
    std::sort(p.begin(), p.end());
}


void showStratum()
{
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i].stratum == 0)
        {
            zero++;
        }
        else if (p[i].stratum == 1)
        {
            one++;
        }
        else if (p[i].stratum == 2)
        {
            two++;
        }
        else if (p[i].stratum == 3)
        {
            three++;
        }
        else if (p[i].stratum == 4)
        {
            four++;
        }
        else if (p[i].stratum == 5)
        {
            five++;
        }
    }

    std::cout << "\n0:" << zero
              << "\n1:" << one
              << "\n2:" << two
              << "\n3:" << three
              << "\n4:" << four
              << "\n5:" << five;

}

void simulateInteractions()
{
}

void createRandom(int numOfPeople)
{
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_real_distribution<double> distribution(0, 6);
    
    for (double i = 0; i < numOfPeople; i += 1)
    {
        //std::cout << rounded << "\n";
        person a(i + 1,std::round(100 * distribution(generator)) / 100);
        p.push_back(a);
        //std::cout << p[i].rating << "\n";
    }
    std::cout << "Number of Objects Created: " << p.size() << "\n";
}

void showRateings()
{
    for (int i = 0; i < p.size(); i++)
    {
        std::cout << p[i].rating << "\n";
    }
}
