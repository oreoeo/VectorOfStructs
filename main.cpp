// Orion Davis 3003072 ord4@zips.uakron.edu
// The University of Akron
// Computer Science II
// Prof. Will
// ASSGN2-A

// INCLUDED FILES
#include <vector>
#include <iomanip>
#include <iostream>
#include "constants.hpp"
#include "tax_payer.hpp"
#include "tax_taker.hpp"
#include "tax_print.hpp"

// FUNCTIONS
void taxTaker(std::vector<TaxPayer>&);
void taxPrint(std::vector<TaxPayer>&);

int main(){
   // Create our vector of structs
   std::vector<TaxPayer> citizen;

   // Pass vector of structs to functions
   taxTaker(citizen);
   taxPrint(citizen);

   return 0;
}
