#include <iostream>

using namespace std;

void schimba(int [], int);
int minim(int [], int);

int main(){
    int a[20], nr, i;
    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    schimba(a, nr);   //  In sir sunt 7 elemente
    int mini = minim(a, nr);
    cout << "Minimul valorilor dupa schimbarea semnelor este: " << mini << endl;
    return 0;
}
void schimba(int a[], int n) {
   int i;
   for (i = 0; i < n; i++) {
      if(a[i] < 0)
         a[i] = -a[i];
   }
}

int minim(int a[], int n) {
   int i;
   int m = a[0];
   for (i = 1; i < n; i++) {
      if(a[i] < m)
         m = a[i];
   }
   return m;
}
