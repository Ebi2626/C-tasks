/* Program konkatenujacy dwa stringi
 */


#include <iostream>
#include <string>
#define ENTER cout<<endl; 
using namespace std;

int main(){
  string pan = "Pan ";
  string tadeusz = "Tadeusz";
  string konkatenacja;
  cout<< "Zmienna pierwsza to: " << pan << endl;
  cout<< "Zmienna druga to: " << tadeusz << endl;
  konkatenacja = pan + tadeusz;
  cout<< "Efekt konkatenacji tych stringow to: " << konkatenacja << endl;
  return 0;
}

