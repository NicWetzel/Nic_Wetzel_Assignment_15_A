// Nic Wetzel
// CIS 1202 501
// December 1, 2021

#include <iostream>

using namespace std;

class invalidCharacterException
{

};

class invalidRangeException
{

};

char character(char start, int offset)
{

}

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
