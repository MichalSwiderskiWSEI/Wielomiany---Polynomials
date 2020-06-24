#include <utility>
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <cmath>
#include <sstream>
#include <locale.h>
#include "../Wielomiany---Polynomials/EquationNode.h"
#include "../Wielomiany---Polynomials/Equation.h"
#include "../Wielomiany---Polynomials/EquationBuilder.h"
#include "../Wielomiany---Polynomials/CommandLineInput.h"
#include "../Wielomiany---Polynomials/EquationDatabase.h"
#include "../Wielomiany---Polynomials/App.h"

int main()
{
	setlocale(LC_ALL, "");
	std::cout << "       Operacje na wielomianach 1 zmiennej" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------" << std::endl;
	auto app = new App();
	app->App::start();
	return 0;
}