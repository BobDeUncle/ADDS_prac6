#include "Rearrange.h"

#include "string"

using namespace std;

Individual Rearrange::mutate(Individual individual, int k) {
  k--;
  string binString = individual.getString();

  while (k > binString.length()) {
    k = k - binString.length();
  }

  binString = binString.substr(k, binString.length() - k) + binString.substr(0, k);

  Individual offspring(binString);
  return offspring;
};



// Rearrange: In this class, the mutate function rearranges the list. 
// The function will select the kth digit in the bitstring (again, counting in circles). 
// This digit and all digits after it (all the way to the tail) will be moved to the start of the list. 
// For example, if you were rearranging the list (a,b,c,d,e) and k= 3, 
// the function would return an Individual with the list (c,d,e,a,b).