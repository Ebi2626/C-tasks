/* Program usuwajacy spacje i zwracajacy tekst bez spacji
 */


#include <iostream>
#include <string>
#include <algorithm>

#define ENTER cout<<endl;

using namespace std;

int main() {
	cout<< "\t ## Program usuwajacy spacje ##" << endl;
	ENTER
	cout << "\t Wprowadz zdanie" << endl;
	ENTER
	string zdanie;
	bool petla = true;
	getline(cin, zdanie);
	ENTER
	while(petla){
	  size_t spacja = zdanie.find(" ");
	  if(spacja != string::npos){
	    zdanie.replace(spacja,1, "");
	  } else {
	    cout<<"\t Zdanie bez spacji brzmi" <<endl;
	    ENTER
	    cout<<zdanie <<endl;
	    ENTER
	    petla = false;
	  }
	}
	return 0;
}

