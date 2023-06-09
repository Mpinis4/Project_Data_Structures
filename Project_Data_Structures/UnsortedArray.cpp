#include "UnsortedArray.h"

UnsortedArray::UnsortedArray()
{
    size=0;
    capacity=30;
    Array=new Element*[capacity];
}

UnsortedArray::~UnsortedArray()
{
    delete[] Array;
}

bool UnsortedArray::operator+=(Element *givenEl)
{

    if(size<capacity)
    {
        Array[size]=givenEl;
        size++;
        return true;
    }
    else
    {
        capacity+=3;
        Element** temp=new Element* [capacity];
        for(int i=0;i<size;i++)
        {
            temp[i]=Array[i];
        }
        temp[size]=givenEl;
        delete[] Array;
        Array=temp;
        cout<<"---new memory allocated---"<<endl;
        size++;
        return true;
    }

}

