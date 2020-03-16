/* Program dodajacy string w srodek innego
 */


#include <iostream>
#include <string>
#define ENTER cout<<endl; 
using namespace std;

int main(){
  string poczatek = "Czasem slonce,   deszcz";
  string doklejany = "czasem";
  bool odp = true;
  cout<< poczatek << endl;
  cout<< "Czy dodac brakujacy wyraz?" << endl;
  while (odp){
	  char wybor;
	  cout<<"Wprowadz \"y\" zeby sie zgodzic, lub \"n\" by odmowic" << endl;
	  cin>> wybor;
	  if (wybor == 'y'){
	    string szukana = "deszcz";
	    size_t pozycjaSzukana = poczatek.find(szukana);
	    if(pozycjaSzukana == string::npos){
	      cout<<"Wystapil blad przy wyszukiwaniu zmiennej deszcz"<<endl;
	    } else {
	      poczatek.insert((pozycjaSzukana - 2), doklejany);
	      cout<<poczatek<<endl;
	      ENTER
	      odp = false;
	    }
	  } else if (wybor == 'n'){
	    cout<< "Przykro nam, ze opuszczasz nasz program" << endl;
	    odp = false;
	  }
  }
  return 0;
}

