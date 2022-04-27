#include "Individual.h"

#include "string"

using namespace std;

Individual::Individual(int length) {
  string output = "";
  for (int i = 0; i < length; i++) {
    output += "0";
  }
  this->binaryString = output;
};

Individual::Individual(string binString) {
  this->binaryString = binString;
};

string Individual::getString() {
  return this->binaryString;
};

int Individual::getBit(int pos) {
  if (isdigit(this->binaryString.at(pos))) {
    return this->binaryString.at(pos);
  }
  return -1;
};

void Individual::flipBit(int pos) {
  if (this->binaryString.at(pos) == '0') {
    this->binaryString.at(pos) = '1';
  } else {
    this->binaryString.at(pos) = '0';
  }
};

int Individual::getMaxOnes() {
  int length = this->binaryString.length();
  int maxLength = 0;
  int currentLength = 0; 
  for (int i = 0; i < length; i++) {
    if (this->binaryString.at(i) == '1') {
      currentLength++;
    } else {
      if (currentLength > maxLength) {
        maxLength = currentLength;
      }
      currentLength = 0; 
    }
  }
  if (currentLength > maxLength) {
    maxLength = currentLength;
  }
  return maxLength;
};

int Individual::getLength() {
  return this->binaryString.length();
};