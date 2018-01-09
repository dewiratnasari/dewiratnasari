#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main() {

char namapembeli[20], kode[20], merk[20], bonus;
int ukuran, harga, jumlah_beli, lagi, total, bayar, uang_kembali;

awal:

clrscr();

cout<<"\t\tToko Notebook";
cout<<endl;
cout<<"==============================================";
cout<<endl;
cout<<"Masukan Nama Pembeli\t\t: "; cin>>namapembeli;
cout<<"Masukan Kode AC001/AS001/TO001\t: "; cin>>kode;
cout<<"Masukan Ukuran 14/12/10 INCH\t: "; cin>>ukuran;
cout<<"Jumlah Beli\t\t\t: "; cin>>jumlah_beli;
cout<<"==============================================";
cout<<endl;
if (!strcmp(kode,"ac001")||!strcmp(kode,"AC001"))
   {
   strcpy(merk,"ACER");
   if(ukuran==14)
      {
      harga=4000000;
      }
   else if(ukuran==12)
      {
      harga=3000000;
      }
   else if(ukuran==10)
      {
      harga=2000000;
      }
   }
if(!strcmp(kode,"as001")||!strcmp(kode,"AS001"))
   {
   strcpy(merk,"ASUS");
   if(ukuran==14)
      {
      harga=6000000;
      }
   else if(ukuran==12)
      {
      harga=3000000;
      }
   else if(ukuran==10)
      {
      harga=5000000;
      }
   }
if(!strcmp(kode,"to001")||!strcmp(kode,"TO001"))
   {
   strcpy(merk,"TOSHIBA");
   if(ukuran==14)
      {
      harga=7000000;
      }
   else if(ukuran==12)
      {
      harga=6000000;
      }
   else if(ukuran==10)
      {
      harga=5000000;
      }
   }
cout<<"Notebook yang di pilih\t\t: "<<merk<<endl;
cout<<"Ukuran\t\t\t\t: "<<ukuran<<endl;
cout<<"Harga Satuan\t\t\t: Rp "<<harga<<endl;
cout<<"Jumlah Beli\t\t\t: "<<jumlah_beli<<endl;
cout<<"=============================================";
cout<<endl;
cout<<"Bonus\t\t\t\t:"<<bonus;
total=harga*jumlah_beli;
if(total>50000000)
   {
   cout<<"Printer";
   }
else if (total>40000000)
   {
   cout<<"Mouse & Keyboard";
   }
else
   {
   cout<<"Souvenir";
   }
cout<<endl;
cout<<"Total\t\t\t\t: Rp "<<total<<endl;
cout<<"Uang Bayar\t\t\t: Rp "; cin>>bayar;
uang_kembali=bayar-total;
cout<<"Uang Kembali\t\t\t: Rp "<<uang_kembali<<endl;
cout<<"===============================================";
cout<<endl;
cout<<"Mau Transaksi Lagi [Y/N] ? "; cin>>lagi; lagi=getche();
if(lagi=='y'||lagi=='Y')
   goto awal;
getch();
}