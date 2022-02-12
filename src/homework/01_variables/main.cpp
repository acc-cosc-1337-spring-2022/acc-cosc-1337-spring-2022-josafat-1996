//write include statements
#include "variables.h" // I followed examples from class but not sure 
#include "iostream"   // I followed exmples from class but not sure 


//write namespace using statement for cout
using std::cout; using std::cin;

// 
int main()
{
	//Create an int variable named num
	int num;

	cout<<"Enter a number: ";
	cin>>num; //capture a whole  umber from the keyboard and assiegned to num variable.

	//Create an int variable name result, call the multiply_numbers with num as its parameter, 
     // assign the return value of the function multiply_numbers to the result variable, and display 
     // the result variable to the screen.    

	int result;
	result = multiply_numbers(num);
	cout<<"Result: "<<result<<"\n";
	
	//Create an int variable named num1, assign it the value 4
	int num1 = 4;

	// Call the function multiply_numbers with num1 as its parameter, assign its return value to the 
    // result variable, and display the result variable to screen.  

	int new_funtion = multiply_numbers(num1);
	result = new_funtion;
	cout<<"Result Varible: "<<result<<"\n";
	return 0;
}
