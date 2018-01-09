#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <stdio.h>

garis()
{
cout<<"================================================================"<<endl;
}
nilai(float uts,float uas,float *hasil,char **huruf)
{
*hasil=(uas*0.4)+(uts*0.6) ;
if (*hasil>=80)
{
*huruf="A";
}
else
if (*hasil>=70)
{
*huruf="B";
}
else
if (*hasil>=56)
{
*huruf="C";
}
else
if (*hasil>=47)
{
*huruf="D";
}
else
{
*huruf="E";
}

}
main()
{
int i, j;

struct
{
float hasil,uas,uts;
char nama[50], *huruf;
}mhs[30];

clrscr();

cout<<"\t\t            NILAI AKHIR UTS dan UAS                 "<<endl;
cout<<"\t\t================================================="<<endl;
cout<<endl;
cout<<"Masukkan jumlah mahasiswa : ";cin>>j;
cout<<endl;

for(i=1;i<=j;i++)

{
cout<<"Mahasiswa ke- "<<i<<endl;
cout<<"Nama Mahasiswa  : ";cin>>mhs[i].nama;
cout<<"Nilai UTS       : ";cin>>mhs[i].uts;
cout<<"Nilai UAS       : ";cin>>mhs[i].uas;
nilai(mhs[i].uts,mhs[i].uas,&mhs[i].hasil,&mhs[i].huruf);
cout<<"Hasil yang di dapat adalah : "<<mhs[i].hasil<<endl;
cout<<"Grade yang di dapat : "<<mhs[i].huruf<<endl;

cout<<endl;
}


garis();
cout<<"No    Nama               Nilai           Nilai           Nilai   "<<endl;
cout<<"      Mahasiswa      UTS       UAS       Akhir           Huruf   "<<endl;
garis();
for(i=1;i<=j;i++)

{
cout<<setiosflags(ios::left)<<setw(6)<<i;
cout<<setiosflags(ios::left)<<setw(15)<<mhs[i].nama;
cout<<setiosflags(ios::left)<<setw(10)<<mhs[i].uts;
cout<<setiosflags(ios::left)<<setw(11)<<mhs[i].uas;
nilai(mhs[i].uts,mhs[i].uas,&mhs[i].hasil,&mhs[i].huruf);
cout<<setiosflags(ios::left)<<setw(17)<<mhs[i].hasil;
cout<<setiosflags(ios::left)<<setw(13)<<mhs[i].huruf<<endl;


}

garis();
getch();
}