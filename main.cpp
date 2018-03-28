/******************************************************************************
* AUTHORS    : Kasra Tabib & Sebastian Hooshmand
* LAB #19    : Buddy's Average Sheep Age Calculator
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/28/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
 * Buddy's Average Sheep Age Calculator
 *-----------------------------------------------------------------------------
 *	This program will output the average age of sheep, a general description
 *		of their age
 *-----------------------------------------------------------------------------
 * INPUT:
 *    sheepAge			: age of the sheep
 *
 * OUTPUT:
 * 	  averageAge		: average age of the sheep
 *****************************************************************************/
int main()
{

	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMERS : Programmer's name
	 * CLASS       : Student's Course
	 * SECTION     : Class Days and Times
	 * LAB_NUM     : Lab Number (specific to this lab)
	 * LAB_NAME    : Title of the Lab
	 *************************************************************************/
	const char PROGRAMMERS []   = "Kasra Tabib & Sebastian Hooshmand";
	const char CLASS[]          = "CS1A";
	const char SECTION []       = "MW: 8am-11:50am";
	const int  LAB_NUM          = 19;
	const char LAB_NAME[]       = "Buddy's Average Sheep Age Calculator";

	// Variable Declarations
	int 	sheepAge;
	float 	totalAge;
	float	averageAge;
	float 	sheepCount;
	int 	count;


	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMERS << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM     << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	* INPUT - read's in the ages of the sheep.
	**************************************************************************/


	for(count = 1;count <= 3; count = count + 1)
	{
		sheepCount 	= 0;
		totalAge	= 0;

		cout << "TEST # " << count << ":" << endl;
		cout << "Welcome to Buddy's Average Sheep Age Calculator!";
		cout << endl << endl;
		cout << "Enter in the sheep ages, input -1 to exit" << endl;

		sheepCount = 0;

		do
		{
			cout << "Sheep Age: ";
			cin  >> sheepAge;
			cin.ignore(1000,'\n');

			if(sheepAge > 9)
			{
				cout	<< endl;
				cout 	<< "*** Invalid sheep age - please input a value less"
						<< " than or equal to 9!" << endl << endl;
			}

		}while (sheepAge > 9);



		while(sheepAge > -1)
		{

			sheepCount = sheepCount + 1;
			totalAge   = totalAge + sheepAge;

				do
				{
					cout << "Sheep Age: ";
					cin  >> sheepAge;
					cin.ignore(1000,'\n');

					if(sheepAge > 9)
					{
						cout	<< endl;
						cout << "*** Invalid sheep age - please input a value less"
							<< " than or equal to 9!" << endl << endl;
					}

				}while (sheepAge > 9 );

				cout 	<< "Sheep Age: ";
				cin		>> sheepAge;
				cin.ignore(1000,'\n');




		}

		averageAge = totalAge / sheepCount;
		cout << averageAge << endl;
	}


	return 0;
}













