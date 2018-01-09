#include <stdio.h>
#include <conio.h>
#include <iostream>

int main()
{
    int pilihan;
    float C,F,K,R;
    cout<<"program konversi suhu"<<endl;

    cout<<"1 . Celcius"<<endl;
	 cout<<"2 . Fahreinheit"<<endl;
    cout<<"3 . Reamur"<<endl;
    cout<<"4 . Kelvin"<<endl;
 	cout<<"Pilih Nilai Suhu :";

    cin>>pilihan;
    if(pilihan==1){
    cout<<"Nilai Suhu Celsius :";
    cin>>C;
    F=((9*C)/5)+3;
    K=C+273.15;
    R=(4*C)/5;

    cout<<"nilai Fahrenheit = "<<F<<endl<<"nilai Kelvin = "<<K<<endl<<"nilai Reamur = "<<R;
    getch();
    return 0;
    }else if(pilihan==2){
    cout<<"Nilai Suhu Fahreinheit :";
    cin>>F;
    C=((5*F)/9)- 32;
    K=((5*F)/9)- 32+273;
    R=((4*F)/9)- 32;

    cout<<"nilai Celsius = "<<C<<endl<<"nilai Kelvin = "<<K<<endl<<"nilai Reamur = "<<R;
    getch();
    return 0;
    }else if(pilihan==3){
    cout<<"Nilai Suhu Reamur :";
    cin>>R;
    C=((5*R)/4);
    K=((9*R)/4)+ 32;
    F=((5*R)/4)+273;

    cout<<"nilai Fahreinheit = "<<F<<endl<<"nilai Kelvin = "<<K<<endl<<"nilai Celcius = "<<C;
    getch();
    return 0;
}else if(pilihan==4){
    cout<<"Nilai Suhu KELVIN :";
    cin>>K;
    C=K-273;
    F=((4*K)/5)-273;
    R=((9*K)/9)- 273+32;

    cout<<"nilai Celsius = "<<F<<endl<<"nilai Celcius = "<<C<<endl<<"nilai Reamur = "<<R;
    getch();
    return 0;
    }
    }