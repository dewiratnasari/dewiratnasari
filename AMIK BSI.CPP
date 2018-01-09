#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()
{
char kode,atas,lagi,minuman[15];
int qty;
float harga,jml,jml1,jml2,jml3,jml4,tot_harga,pot,hrg_bayar;
clrscr();
cout<<"        Pilihan Menu Minuman\n"<<endl;
printf("Kode\t   Jenis Minuman\tHarga\n");
printf("\n 1\t   Milo\t		Rp 10000\n");
printf("\n 2\t   Kopi\t		Rp 3000\n");
printf("\n 3\t   Teh Manis\t	Rp 2500\n");
printf("\n 4\t   Jus\t		Rp 5000\n");

printf("=======================================\n");
cout<<endl;
cout<<"\nKode                        : ";cin>>kode;
cout<<"Jumlah Pemesanan            : ";cin>>qty;
if (kode=='1')
{strcpy(minuman,"Milo");
harga=10000;
jml1=harga*qty;
jml=jml1;}
else if (kode=='2')
{strcpy(minuman,"Kopi");
harga=3000;
jml2=harga*qty;
jml=jml2;}
else if (kode=='3')
{strcpy(minuman,"Teh Manis");
harga=2500;
jml3=harga*qty;
jml=jml3;}
else
{strcpy(minuman,"Jus");
harga=5000;
jml4=harga*qty;
jml=jml4;}
cout<<"Jenis Minuman		    : "<<minuman<<endl;
cout<<"Jumlah Harga		    : Rp "<<jml<<endl;
cout<<"======================================"<<endl;
tot_harga=jml1+jml2+jml3+jml4;
cout<<"Total Harga		    : Rp "<<tot_harga<<endl;
if(tot_harga>=100000)
pot=0.15*tot_harga;
else
pot=0;
cout<<"Potongan	            : Rp "<<pot<<endl;
hrg_bayar=tot_harga-pot;
cout<<"Harga Bayar		    : Rp "<<hrg_bayar;
getch();
