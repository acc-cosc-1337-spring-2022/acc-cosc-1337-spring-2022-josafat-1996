#include "../src/homework/02_expressions/expressions.h"


//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2




//n file hwexpressions.cpp  write function code, multiply tax_rate and meal_amount and return their product.

double multiply_tax_and_amount(double meal_amount)
{
	double product_Result_tax = ((meal_amount / 100) * tax_rate);
	return product_Result_tax;
}

// In file hwexpressions.cpp, write function code to multiply  meal_amount and tip_rate, return their product.


double multiply_tip_and_amount(double meal_amount, double tip_rate)
{
	double product_Result_tip = ((meal_amount / 100) * tip_rate);
	return product_Result_tip;
}


