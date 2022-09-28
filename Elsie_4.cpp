#include <iostream>
using namespace std;

int main()
{
    
    cout << "Masukan Angka kehadiran= ";
    int kehadiran ;
   cin >> kehadiran ;

   
    cout << "Masukan Angka tugas= ";
    int tugas ;
    cin >> tugas ;
    
    cout << "Masukan Angka uts= ";
    int uts ;
    cin >> uts ;
    
    cout << "Masukan Angka uas= ";
    int uas ;
    cin >> uas ;
    
   int hasil;
      hasil = (kehadiran + tugas + uts + uas)/ 4 ;
     cout << "Hasil Rumus= " <<hasil;
    
}