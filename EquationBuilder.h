#pragma once
#include <list>

class EquationBuilder
{
private:
    std::list<int> params;
public:
    EquationBuilder(std::list<int> params);
public:
    Equation* buildEquation();
};