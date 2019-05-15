#ifndef PERS_HPP
#define PERS_HPP

#include <string>
#include <iostream>

using namespace std;

class Pers
{
    string   myNom;
    unsigned myAge;

public:
    Pers (const string & nom, unsigned age) : myNom (nom), myAge (age) {}
 
    const string & getNom (void) const noexcept { return myNom; }
    unsigned       getAge (void) const noexcept { return myAge; }
 
private:
    ostream & display (ostream & os)  const
    {
        return os << getAge () << " - " << getNom ();
    } // display()
 
public:    // ajouté pour faciliter les essais
    friend ostream & operator << (ostream & os, const Pers & p)
    {
        return p.display (os);
    }
 
};

#endif
