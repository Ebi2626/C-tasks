/* Program konczacy i wypisujacy na ekranie
 * podane zdanie
 */


#include <iostream>
#include <string>
#define ENTER cout<<endl; 
using namespace std;

int main(){
  char odp;
  bool pytanie = true;
  string odpowiedz;
  string zdanie = "Lubie chodzic do szkoly bo...";
  cout<<"\tDokoncz zdanie: "<< zdanie << endl;
  string a = " Lubie uczyc sie nowych rzeczy";
  string b = " Mam w niej wielu przyjaciol";
  string c = " Mozna sie w niej swietnie bawic";
  string d = " Nie wypada powiedziec inaczej";
  while (pytanie){
    cout<<"\tWybierz sposrod powyzszych odpowiedzi" <<endl;
    cout<< "\ta) " << a << endl;
    cout<< "\tb) " << b << endl;
    cout<< "\tc) " << c << endl;
    cout<< "\td) " << d << endl;
    cin>>odp;
    switch(odp){
      case 'a':
	      odpowiedz = a;
	      pytanie = false;
	      break;
      case 'b':
	      odpowiedz = b;
	      pytanie = false;
	      break;
      case 'c':
	      odpowiedz = c;
	      pytanie = false;
	      break;
      case 'd':
	      odpowiedz = d;
	      pytanie = false;
	      break;
      default:
	      cout<<"\tPodano niepoprawna odpowiedz, prosze wprowadzic wlasciwa litere" <<endl;
	      break;
    }
  }
  ENTER
  ENTER
  cout<< "\t" << zdanie <<  odpowiedz << endl;
  return 0;
}

