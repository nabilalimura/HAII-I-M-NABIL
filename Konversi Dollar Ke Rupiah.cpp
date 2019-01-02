#include<iostream>
using namespace std;
int main () {
    int pilihan;
    float rupiah, dollar;

    cout<<"======================================================="<<endl;
    cout<<"==================PROGRAM KONVERSI MATA UANG==========="<<endl;
    cout<<"======================================================="<<endl;
    cout<<endl;
    cout<<" 1.  Rupiah  >>> US Dollar "<<endl;
    cout<<" 2.  US Dollar >>> Rupiah "<<endl;
    cout<<"======================================================="<<endl;

    cout<<"Masukkan Pilihan Anda = ";
    cin >> pilihan;
    if (pilihan==1)
    {
        cout<<" 1.  Rupiah   >>> US Dollar"<<endl;
        cout<<" Masukkan Nilai Rupiah = Rp ";
        cin >> rupiah;
        dollar=rupiah/15213.5;
        cout<<"Maka Nilai US Dollar Anda Adalah = USD "<<dollar<<endl;
    }

    else
    {
        cout<<"MAsukkan Nilai Dollar Anda = USD ";
        cin>>dollar;
        rupiah=dollar*15213.5;
        cout<<"MAka Nilai Rupiah Anda Adalah = Rp "<<rupiah<<endl;
    }
return 0;
}
