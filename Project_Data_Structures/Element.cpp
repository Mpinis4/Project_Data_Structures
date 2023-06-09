#include "Element.h"

Element::Element()
{
    First="";
    Second="";
    numberFound=0;
}

Element::Element(string word1,string word2,unsigned long int TimesFound)
{

    First=word1;
    Second=word2;
    numberFound=TimesFound;
}

Element::~Element()
{
    First.erase();
    Second.erase();
    numberFound=0;
}

bool Element::operator=(Element *givenEl)
{
    First=givenEl->getFirst();
    Second=givenEl->getSecond();
    numberFound=givenEl->getNumberFound();
    return true;
}
