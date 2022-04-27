#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "string"

class Individual {
  public: 
    Individual(int length);
    Individual(std::string binString);
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
  private: 
    std::string binaryString;
};

#endif