#pragma once
#include <iostream>

enum Orientierung
{
    Rechts = 1,
    Links = 2
};

void printStars(int);
bool printFigure(int, Orientierung);
void printSpaces(int);
Orientierung stringZuOrientierung(std::string);

char nextChar(); 