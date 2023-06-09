#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include <string>
using namespace std;

/**
    *���� � ����� ����� �������� ��� ��� ���� ���������� ��� ���������

*/

class Element
{
    public:
        Element();
        Element(string word1,string word2,unsigned long int TimesFound);
        virtual ~Element();
        string getFirst(){return First;}
        string getSecond(){return Second;}
        int getNumberFound(){return numberFound;}
        void setFirst(string gFirst){First=gFirst;}
        void setSecond(string gSecond){Second=gSecond;}
        void setNumberFound(int gNumber){numberFound=gNumber;}

        bool operator=(Element *givenEl);
        void printEL(){cout<<"Pair: ["<<First<<","<<Second<<"] Times of Appearance in the struct: "<<numberFound<<endl;}

    protected:

    private:
        unsigned long int numberFound;// � ��������� ������� ��� ����� ��� ����������� �� ���� ������
        string First;
        string Second;

};

#endif // ELEMENT_H
