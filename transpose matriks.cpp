#include <iostream>

using namespace std;

int main(){
  int a, b, c, d, matriks[2][3], transpose[2][3];

  cout << "Masukkan jumlah baris matriks: ";
  cin >> c;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> d;

  cout << "Masukkan elemen matriks\n";
  for (a = 0; a < c; a++){
    for (b = 0; b < d; b++){
      cin  >> matriks[a][b];
    }
  }

  for (a = 0; a < c; a++){
    for (b = 0; b < d; b++){
      transpose[b][a] = matriks[a][b];
    }
  }

  cout << "Hasil Transpose Matriks: \n";
  for (a = 0; a < d; a++){
    for (b = 0; b < c; b++){
      cout << transpose[a][b] << "\t";
    }
    cout << endl;
  }
}
