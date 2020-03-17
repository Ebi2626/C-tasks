/* Program wyciagajacy srodkowy wyraz sposrod trzech
 */


#include <iostream>
#include <string>
#include <algorithm>

#define ENTER cout<<endl;

using namespace std;

int main() {
	ENTER
	cout<< "\t ## Program wyciagajacy wyraz \"programowac\"  ##" << endl;
	ENTER
	cout << "\t Zdanie oryginalne:" << endl;
	ENTER
	string zdanie = "chce programowac roboty";
	string szukana = "programowac";
	cout<< "\t" << zdanie <<  endl;
	ENTER
	size_t slowoWycinane  = zdanie.find(szukana);
	  if(slowoWycinane != string::npos){
	    string slowo = zdanie.substr(slowoWycinane, szukana.length());
	    zdanie = "\t " + slowo;
	    cout << "\t Zdanie przetworzone brzmi:" <<endl;
	    ENTER
	    cout << zdanie << endl;
	    ENTER
	  } else {
	    cout << "\t Nie znaleziono szukanego slowa" << endl;
	    ENTER
	  }
	return 0;
}

