/* Program podajacy dlugos wczytanego
 * z klawiatury imienia i nazwiska
 */


#include <iostream>
#include <string>
#define enter cout<<endl; 
using namespace std;

int main(){
  string imie;
  string nazwisko;
  string personalia;
  cout<<"Podaj swoje imie"<<endl;
  cin>>imie;
  cout<<"Podaj swoje nazwisko"<<endl;
  cin>>nazwisko;
  personalia = imie + nazwisko;
  cout<< "\tDlugosc twojego imienia obejmuje " << imie.length() << " liter." << endl;
  enter
  cout<< "\tTwoje nazwisko sklada sie z " << nazwisko.length() << " liter." << endl;
  enter
  cout<<"\tDlugosc twojego imienia i nazwiska wynosi w sumie "<< personalia.length() << " liter."  <<endl;




  return 0;
}

