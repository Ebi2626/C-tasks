/* Program zastepujace wybrane slowo innym
 */


#include <iostream>
#include <string>
#include <algorithm>

#define ENTER cout<<endl;

using namespace std;

int main() {
	ENTER
	cout<< "\t ## Program zamieniajcy stringi  ##" << endl;
	ENTER
	cout << "\t Zdanie oryginalne:" << endl;
	ENTER
	string zdanie = "Nie lubie poniedzialkow";
	string szukana = "poniedzialkow";
	string wstawiana = "wtorkow";
	cout << "\t" <<  zdanie << endl;
	ENTER
	size_t poniedzialek  = zdanie.find(szukana);
	  if(poniedzialek != string::npos){
	    zdanie.replace(poniedzialek, szukana.length(), "");
	    zdanie = "\t " + zdanie + wstawiana;
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

