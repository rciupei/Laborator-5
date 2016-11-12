#include <iostream>

using namespace std;

int caut(double[], int , double );

int main(){
    double a[20];int  nr, i;
    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int rez=caut(a,nr,8);
    if(rez<0)
        cout<<"Valoarea nu a fost gasita";
    else
    cout << "Valoarea introdusa se afla pe pozitia"<< rez+1 << endl;
    return 0;
}


int caut(double a[], int n, double valoare){
   int i;
   for(i=0; i<n; i++) {
      if(a[i] == valoare)
	     return i;
   }
   return -1;  //  Nu s-a gasit
}
