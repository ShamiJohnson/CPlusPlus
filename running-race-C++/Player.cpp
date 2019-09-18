/*Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
 *
 * Ehtsham Nisar
 *
 */


#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Roster::Roster()
{
    FirstName = "";
    LastName = "";
    JerseyNum = "" ;
    
}

void Roster::setFirstName ( string cn)
{
    FirstName = cn;
}

void Roster::setLastname (string)
{
    LastName = c;
}

void Roster::setJerseyNum (string)
{
    JerseyNum = cc;
}

string Roster::getFirstName()
{
    return FirstName;
}

string Roster::getLastName()
{
    return LastName;
}

string Roster::getJerseyNum()
{
    return JerseyNum;
}


