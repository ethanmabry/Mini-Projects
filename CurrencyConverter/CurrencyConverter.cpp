#include <iostream>
//This program converts three different currencies to USD from user input and adds them together.
int main() {
  
  float pesoToUSD = 0.045;
  float reaisToUSD = 0.19;
  float solesToUSD = 0.28;

  float pesos, reais, soles;

  std::cout <<"Enter the number of Colombian Pesos: \n";
  std::cin >>pesos;

  std::cout <<"Enter the number of Brazilian Reais: \n";
  std::cin >>reais;

  std::cout <<"Enter the number of Peruvian Soles: \n";
  std::cin >>soles;

  float usdTotal = (pesos*pesoToUSD) + (reaisToUSD*reais) + (solesToUSD*soles);
  std::cout <<"US Dollars = $ "<<usdTotal;
  
}
