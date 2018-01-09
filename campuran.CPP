#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int nilai1=2;
int nilai2=4;
int nilai3=8;
int D1,D2,D3;
D1=nilai1+nilai2*nilai3;
D2=nilai1+(nilai2*nilai3);
D3=(nilai1+nilai2)*nilai3;
clrscr();
cout <<"==========================\n";
cout <<"     Hasil Akhir        \n";
cout <<"===========================\n";
cout <<"\n Hasil Akhir          :"<<D1<<ends;
cout <<"\n Hasil Akhir          :"<<D2<<ends;
cout <<"\n Hasil Akhir          :"<<D3<<ends;
getch();
}

