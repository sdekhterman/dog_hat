#include "doggo.h"
#include <iostream>

// set the private hat status
void Doggo::setDogHat(int hatInt) {
  dogHatStatus = hatInt;
}

// get the private hat status
int Doggo::getDogHat() {
  return dogHatStatus;
}

// class constructor definition (called when object made)
Doggo::Doggo()
{
    std::cout<<"A dog approaches from the distance."<<std::endl;
}

// class destructor definition (called when object destroyed)
Doggo::~Doggo()
{
    std::cout<<"Years pass and yet the memory of the dog stays with you.";
}