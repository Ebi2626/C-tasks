/* Program wyciagajacy srodkowy wyraz sposrod trzech
 */


#include <iostream>
#include <string>
#include <algorithm>

#define ENTER cout<<endl;

using namespace std;

int main() {
	ENTER
	cout<< "\t ## Program wyszukujacy slowo \"jaskolka\"  ##" << endl;
	ENTER
	cout << "\t Zdanie oryginalne:" << endl;
	ENTER
	string zdanie = "Jedna jaskolka wiosny nie czyni";
	string szukana = "jaskolka";
	cout<< "\t" << zdanie <<  endl;
	ENTER
	size_t slowoWycinane  = zdanie.find(szukana);
	  if(slowoWycinane != string::npos){
	    string slowo = zdanie.substr(slowoWycinane, szukana.length());
	    zdanie = "\t " + slowo;
	    cout << "\t Slowo znalezione  brzmi:" <<endl;
	    ENTER
	    cout << zdanie << endl;
	    ENTER
	    cout << "\t Indeks poczatku szukanego slowa to: " << slowoWycinane << endl; 
	    ENTER
	    cout << "\t Dlugosc szukanego slowa wynosi: " << szukana.length() << endl;
	    ENTER
	  } else {
	    cout << "\t Nie znaleziono szukanego slowa" << endl;
	    ENTER
	  }
	return 0;
}

