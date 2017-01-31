#ifndef tax_print_hpp
#define tax_print_hpp
/***********************************************************************
* Pre-Condition: Vector of structre                                    *
* Post-Condition: Amount of taxes owed formatted and displayed to user *
***********************************************************************/
void taxPrint(std::vector<TaxPayer> &person){
   std::cout << "Taxes due for the year:\n\n";

   for(int i = 0; i < SIZE; ++i){
      std::cout << "Tax payer " << i+1 << " : $" << std::fixed << std::setprecision(2) << person[i].taxes << "\n";
   }

   std::cout << "\n";
   
   return;
}
#endif
