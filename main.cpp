/*************************************
 * Tim Loveland
 * 5/25/2021
 * Practicing using sizeof operator
 * **********************************/
//Preprocessor directive
#include <iostream>
#include <iomanip> 
using namespace std;

//Function prototypes


int main()
{
    cout << "SizeOf information" << endl;
    cout << "=================================" << "\n\n";
    
    //Display size of char
    cout << "char: " << sizeof(char) << " byte" << endl;
    //Display size of int
    cout << "int: " << sizeof(int) << " bytes" << endl;
    //Display size of unsigned int
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    //Display size of short
    cout << "short int: " << sizeof(short) << " bytes" << endl;
    //Display size of long
    cout << "long int: " << sizeof(long) << " bytes" << endl;
    //Display size of long long
    cout << "long long int: " << sizeof(long long) << " bytes" << "\n\n";
    
    cout << "==========================================" << "\n\n";
    
    //Display size of float
    cout << "float: " << sizeof(float) << " bytes" << endl;
    //Display size of double
    cout << "double: " << sizeof(double) << " bytes" << endl;
    //Display size of long double
    cout << "long double: " << sizeof(long double) << " bytes" << "\n\n";
    
    //Use values defined in <climits>
    cout << "==========================================" << "\n\n";
    cout << "Minimum values for integers: " << endl;
    //Character
    cout << "char: " << CHAR_MIN << endl;
    //Int
    cout << "int: " << INT_MIN << endl;
    //Short
    cout << "short: " << SHRT_MIN << endl;
    //Long
    cout << "long: " << LONG_MIN << endl;
    //Long Long
    cout << "long long: " << LLONG_MIN << endl << endl;
    
    cout << "==========================================" << "\n\n";
    
    //Maximum values for <climits>
    cout << "Maximum values:" << endl;
    //Character
    cout << "char: " << CHAR_MAX << endl;
    //Int
    cout << "int: " << INT_MAX << endl;
    //Short
    cout << "short: " << SHRT_MAX << endl;
    //Long
    cout << "long: " << LONG_MAX << endl;
    //Long long
    cout << "long long: " << LLONG_MAX << endl;
    
    //SizeOf can also be used with variable names
    cout << "==========================================" << "\n\n";
    cout << "SizeOf using variables names" << endl << endl;
    //Integer
    int age {21};
    //Display variable
    cout << "Variable \"age\" has an integer value of 24." << endl;
    //Display size
    cout << "age is " << sizeof(age) << " bytes. [ sizeof(age) ]" << endl;
    //or
    cout << "age is " << sizeof age << " bytes. [ sizeof age ]" << endl;
    //Double
    double wage {22.24};
    //Display double variable
    cout << "Double \"wage\" has a value of 22.24." << endl;
    //Display size
    cout << "wage is " << sizeof(wage) << " bytes. [ sizeof(wage) ]" << endl;
    //or
    cout << "wage is " << sizeof wage << " bytes. [ sizeof wage ]" << endl << endl;
    
	return 0;
}
