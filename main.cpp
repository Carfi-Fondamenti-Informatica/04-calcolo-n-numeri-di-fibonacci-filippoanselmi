#include <iostream>
using namespace std;

int main() {
   int n=0; cin >> n;
   int somma=1, x=1;
   int i=0;
   if (n<2) {
      cout << "errore";
   } else {
      while (i<n) {
         cout << somma << endl;
         somma+=x;
         i++;
         if (i<n) {
            cout << x << endl;
            x+=somma;
            i++;
         } else {
            break;
         }
      }
   }
   return 0;
}
