#include "doggo.h"
#include <iostream>

void Doggo::setDogHat(int hatInt) {
  dogHatStatus = hatInt;
}

int Doggo::getDogHat() {
  return dogHatStatus;
}

Doggo::Doggo()
{
    std::cout<<"A dog approaches from the distance."<<std::endl;
}

Doggo::~Doggo()
{
    std::cout<<"Years pass and yet the memory of the dog stays with you.";
}