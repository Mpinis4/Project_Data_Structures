#include <iostream>
#include "Element.h"
#include <string>
#include "UnsortedArray.h"


using namespace std;

int main()
{
    string name1[6];
    string name2[6];
    Element* element[6];
    int give;
    UnsortedArray newArray;
    for(int i=0;i<6;i++)
    {
        cout<<"Give the words...and number of appearance"<<endl;
        cin>>name1[i]>>name2[i]>>give;
        element[i]=new Element(name1[i],name2[i],give);
        cout<<"----HERE IS OK----"<<endl;
        newArray+=element[i];

    }

    newArray.print();


    cout << "Hello world!" << endl;
    return 0;
}
