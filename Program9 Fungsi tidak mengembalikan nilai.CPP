#include <iostream.h>
#include <conio.h>
#include <math.h>

int panjang, lebar;  //deklarasi variabel global

void input(); //deklarasi prototipe fungsi

void Luas()
{
	int ls; //deklarasi variabel lokal
   ls = panjang * lebar;
   cout<<"Luasnya adalah: "<<ls;
}

void Keliling()
{
	int kl;  //deklarasi variabel lokal
   kl = (2*panjang) + (2*lebar);
   cout<<"Kelilingnya adalah : "<<kl;
}

void Diagonal()
{
	float dg;  //deklarasi variabel lokal
   dg = sqrt ((panjang*panjang) + (lebar*lebar));
   cout<<"diagonalnya adalah : "<<dg;
}

void main ()
{
	int pilih ;
   do
   	{
      clrscr();
      cout<< "Pilihlah ---------> "<<endl;
      cout<< "1. Luas Persegi Panjang\n";
      cout<< "2. Keliling Persegi Panjang\n";
      cout<< "3. Diagonal Persegi Panjang\n";
      cout<< "4. Selesai\n";
      cout<< "MAsukkan Pilihan Anda : ";
      cin>>pilih;

   	if (pilih != 4)
      	input();		//Pemanggilan fungsi input

         switch (pilih)
         {
         	case 1 : Luas(); //Pemanggilan fungsi luas
            			break;
            case 2 : Keliling(); //Pemanggilan fungsi keliling
            			break;
            case 3 : Diagonal(); //Pemanggilan fungsi diagonal
            			break;
            case 4 : cout<<"Terima Kasih..!";
         }
         getch();
      }while (pilih != 4);
   }

   void input()
   {
   	cout<<"Masukkan Nilai Panjang : ";
      cin>>panjang;
      cout<<"Masukkan Nilai Lebar : ";
      cin>>lebar;
      return;
   }