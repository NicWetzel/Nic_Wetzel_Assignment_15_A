// Nic Wetzel
// CIS 1202 501
// December 1, 2021

#include <iostream>

using namespace std;


// Exception classes. Left empty as it is not necessary to have anythin ginside these classes
class invalidCharacterException
{

};

class invalidRangeException
{

};

// Character function that will use if statements to throw each exception and return the result
char character(char start, int offset)
{
    if (start < 'A' || start > 'Z' && start < 'a' || start > 'z')
    {
        throw invalidCharacterException();
    }

    int result = start + offset;

    if (result < 'A' || result > 'Z' && result < 'a' || result > 'z')
    {
        throw invalidRangeException();
    }

    return result;
}

// Main function that will use a driver to test four different start and offset values using try/catch blocks
int main()
{
    cout << character('a', 1) << endl;
    
    try
    {
        character('a', -1);
    }
    catch(invalidRangeException)
    {
        cout << "ERROR: Invalid Range Exception!" << endl;
    }

    cout << character('Z', -1) << endl;

    try
    {
        character('?', 5);
    }
    catch(invalidCharacterException)
    {
        cout << "ERROR: Invalid Character Exception!" << endl;
    }
}
