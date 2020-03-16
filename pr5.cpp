/* Program odwracajacy tekst
 */


#include <iostream>
#include <string>
#include <algorithm>
#define ENTER cout<<endl; 
using namespace std;

int main() {
	cout<<"\t ## Program odwracajacy tekst ##" << endl;
 	bool petla = true;
	cout<<"\t Wprowadz tekst, ktory ma zostac odwrocony" << endl;
	while(petla){
		cin.ignore();
		string tekst;
		string odp;
		getline(cin, tekst);
		ENTER
		cout<< "\t Tekst odwrocony brzmi:" <<endl;
		reverse(tekst.begin(), tekst.end());
		cout << "\t" << tekst << endl;
		ENTER
		cout << "\t Czy chcesz wprowadzic nowa wartosc?(y/n)" <<endl;
		cin>>odp;
		if (odp == "n"){
		  petla = false;
		} else if (odp != "y"){
		  cout << "\t Podales zla wartosc, wiec wprowadz nowy tekst :) "<< endl;
		} else {
		  cout<< "\t Wprowadz nowy tekst" << endl;
		}
	}	

return 0;
}

