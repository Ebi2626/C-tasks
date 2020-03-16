/* Program wypisujacy tekst wielkimi literami
 */


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
	string tekst = "Lubie szarlotke";
	int i;
        int end = tekst.length();
	for(i=0; i<end; i++){
	  tekst[i] = toupper(tekst[i]);
	}	
	cout << tekst << endl;
	return 0;
}

