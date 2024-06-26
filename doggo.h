#ifndef DOGGO_H
#define DOGGO_H

// class for storing if the dog has a hat and providing start/end text
class Doggo {
  public:
    void setDogHat(int hatInt);
    int getDogHat();
    Doggo();
    ~Doggo();
  private:   
    int dogHatStatus;
};

#endif