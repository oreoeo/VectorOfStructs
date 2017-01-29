// Orio Davis 3003072 ord4
// The University of Akron
// Computer Science II
// Prof. Will
// ASSGN2-A

#include <vector>
#include <iomanip>
#include <iostream>
#include "constants.hpp"
#include "tax_payer.hpp"
#include "tax_taker.hpp"
#include "tax_print.hpp"

void taxTaker(std::vector<TaxPayer>&);
void taxPrint(std::vector<TaxPayer>&);

int main(){
   using std::cout;
   using std::cin;

   std::vector<TaxPayer> citizen;

   taxTaker(citizen);
   taxPrint(citizen);

   return 0;
}
