#ifndef UNSORTEDARRAY_H
#define UNSORTEDARRAY_H
#include "Element.h"


class UnsortedArray
{
    public:
        UnsortedArray();
        void print()
        {
            for(int i=0;i<size;++i)
            {
                Array[i]->printEL();
            }
        }
        virtual ~UnsortedArray();

        bool operator+=(Element *givenEl);
        bool operator-=(Element givenEl);
        int searchElement(Element givenEl);

        void getSpace();

    protected:

    private:
        int size;//το μέγεθος του πίνακα
        int capacity;// η χωρητικότητά του
        Element** Array;
};

#endif // UNSORTEDARRAY_H
