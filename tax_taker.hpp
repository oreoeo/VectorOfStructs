#ifndef tax_taker_hpp
#define tax_taker_hpp
/*********************************************************************
* Precondition: Vector of structures                                 *
* Postcondition: Lets the user enter the tax information for as many *
*                people as specificed from the program earlier       *
*********************************************************************/
void taxTaker(std::vector<TaxPayer> &person){
   std::cout << "Please enter the tax information for " << SIZE << " tax payers:\n\n";

   for(int i = 0; i < SIZE; ++i){
      // Create an instance in the vector of the structure
      person.push_back(TaxPayer());

      // Collect information from the user
      std::cout << "Enter the income for tax payer " << i+1 << ": ";
      std::cin >> person[i].income;
      std::cout << "Enter the tax rate for tax payer " << i+1 << ": ";
      std::cin >> person[i].taxRate;
      std::cout << "\n";

      // Divide by 100 to correct rate not being a percentage
      person[i].taxes = (person[i].income * person[i].taxRate) / 100;
   }
   return;
}

#endif
