#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n = 0;

void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";        
cout<<"1. Input nilai ke Array"<<"\n";            
cout<<"2. Output Array"<<"\n";            
cout<<"3. Sortir Array"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void input(){
  system("cls");
  cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    if (n > MAX) {
      cout << "Maksimum elemen adalah " << MAX << ".\n";
      n = MAX;
  }
  for (int i = 0; i < n; i++) {
      cout << "Elemen ke-" << i + 1 << ": ";
      cin >> arr[i];
  }
  getch();
  }

  void output() {
    if (n == 0) {
        cout << "Array masih kosong!\n";
        return;
    }
    cout << "Isi Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void bubbleSort() {
    if (n == 0) {
        cout << "Array masih kosong!\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
  }

void info(){
  system("cls");
  cout << "Program ini dibuat untuk demonstrasi menu dan bubble sort dalam C++.\n";
  cout << "Fitur: input array, output array, dan pengurutan menggunakan Bubble Sort.\n";
  getch();
  }



int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    input();
    break;
   case '2':
   output();
    /* code */ 
    break;  
   case '3':
   bubbleSort();
    /* code */
    break;  
   case '4':
    info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}