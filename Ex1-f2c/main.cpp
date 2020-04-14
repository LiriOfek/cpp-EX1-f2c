/********************************************************\
File Name: main.cpp
Author: Liri (14/4/2020)
Purpose: This file get temperature in Fahrenheit from user
		 and convert it to Celsius
\********************************************************/

#include <iostream>

const double INITIAL_TEMPERATURE = 0;
const int SUCCESS = 0;
const char* ENTER_TEMPERATURE = "Enter temperature in Fahrenheit:";
const char* STRING_FAHRENHEIT = " Fahrenheit is: ";
const char* STRING_CELSIUS = " Celsius";

double f2c(double temperature_in_fahrenheit)
{
	/**
	* @brief  Get temperature in Fahrenheit, and return the
	*		  temperature in Celsius
	* @param  In double temperature_in_fahrenheit - temperature in
	*	      Fahrenheit
	*		  OUT double temperature_in_celsius - temperature in
	*		  Celsius
	* @return  The temperature in celsius
	* @author  Liri
	*/
	double temperature_in_celsius = INITIAL_TEMPERATURE;

	temperature_in_celsius = (temperature_in_fahrenheit - 32) * 5 / 9;

	return temperature_in_celsius;
}

int main()
{
	/**
	* @brief  Get temperature in Fahrenheit from user and print the
	*		  trmperature in Celsius
	* @param  OUT SUCCESS in the end of the running
	* @return  SUCCESS in the end of the running
	* @author  Liri
	*/
	double temperature_in_fahrenheit = INITIAL_TEMPERATURE;
	double temperature_in_celsius = INITIAL_TEMPERATURE;

	/*receive temperature in Fahrenheit from user*/
	std::cout << ENTER_TEMPERATURE << std::endl;
	std::cin >> temperature_in_fahrenheit;

	/*get temperature in Celsious*/
	temperature_in_celsius = f2c(temperature_in_fahrenheit);

	/*print temperature in Celsious*/
	std::cout << temperature_in_fahrenheit <<
		STRING_FAHRENHEIT << temperature_in_celsius
		<< STRING_CELSIUS << std::endl;

	return SUCCESS;
}
