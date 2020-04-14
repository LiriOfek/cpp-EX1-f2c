#include <iostream>

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
	double temperature_in_celsius;

	temperature_in_celsius = (temperature_in_fahrenheit - 32) * 5 / 9;

	return temperature_in_celsius;
}
