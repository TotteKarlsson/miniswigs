#include "freemenot.h"
#include <iostream>

//void _Unlocksyslock(int){return false;}
//void _Locksyslock(int){return false;}


using namespace std;
MyObject::MyObject(const string& lbl)
:
label(lbl)
{
	cout<<"In object ctor"<<endl;
}

MyObject::~MyObject()
{
	cout<<"In object dtor"<<endl;
}

string MyObject::getLabel()
{
    return label;
}

MyContainer::MyContainer()
{
	cout<<"In container ctor"<<endl;
}

MyContainer::~MyContainer()
{
    cout<<"In container dtor"<<endl;
    for(unsigned int i = 0; i < mObjects.size(); i++)
    {
        delete mObjects[i];
    }
}

int MyContainer::getNrOfObjects()
{
    return mObjects.size();
}

void MyContainer::addObject(MyObject* o)
{
    mObjects.push_back(o);
}

MyObject* MyContainer::getObject(unsigned int i)
{
    return mObjects[i];
}
