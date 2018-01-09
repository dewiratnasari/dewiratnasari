#include <stdio.h>
#include <conio.h>
#include <iostream>

int main()
{
    float C,F,K,R;
    cout<<"program konversi suhu"<<endl;
    cout<<"masukkan nilai celciusnya = ";
    cin>>C;
    F=C*1.8 + 32;
    K=C+273.15;    
    R=C*0.8;
    cout<<"nilai Fahrenheit = "<<F<<endl<<"nilai Kelvin = "<<K<<endl<<"nilai Reamur = "<<R;
    getch();
    return 0;

}