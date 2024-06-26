#ifndef DOGGO_H
#define DOGGO_H

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