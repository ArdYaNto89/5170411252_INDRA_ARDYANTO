#include<iostream>
#include<conio.h>
using namespace std;

struct STACK
{
int data[3];
int atas;
string namaa[3];
string posisii[3];
string karakter;

}tumpukan;
STACK tumpuk;

int main ()
{
int pilihan,i;
long baru;
string posisi,nama;
tumpuk.atas=-1;
tumpuk.karakter=-1;
do
{
cout<<" STACK MENGGUNAKKAN LINK LIST :\n";
cout<<".................................\n";
cout<<"1.PUSH\n";
cout<<"2.POP\n";
cout<<"3.TAMPIL\n";
cout<<"4.KELUAR\n";
 cout<<"pilih (1-4) :\n";
cin>>pilihan;
switch(pilihan)
{
case 1:
 {
 if(tumpuk.atas==3-1)
 {
 cout<<"Tumpukan Penuh";
 cout<<endl;
 getch();
 }
 else
 {
cout<<"data pemain bola"<<endl;
cout<<"-------------------------------------\n";
 cout<<"Nomor Punggung = ";
 cin>>baru;
 cout<<"nama =";
 cin>>nama;
 cout<<"posisi =";
 cin>>posisi;
 tumpuk.atas++;

 tumpuk.data[tumpuk.atas]=baru;
  
 }
 cout<<endl;
 cout<<"-------------------------------------\n";
break;
}
case 2:
 {
 if(tumpuk.atas==-1)
 {
 cout<<"Tumpukan Kosong";
 cout<<endl;
 getch();
 }
 else
 {
 for(long i=0; i<=tumpuk.atas; i++)
        {
  cout<<i<<"->"<<nama[i]<<"->"<<posisi[i]<<"->"<<endl;
        }
 tumpuk.atas--;

 cout<<endl;
 getch();
 }
 cout<<"-------------------------------------\n";
break;
}
case 3:
 {
 if(tumpuk.atas==-1)
 {
 
 cout<<"Tumpukan Kosong";
 cout<<endl;
 getch();
 }
 else
 {
    cout<<"\nData pada stack saat ini adalah : \n";
 for(long i=0; i<=tumpuk.atas; i++)
        {
  cout<<i<<"->"<<nama[i]<<"->"<<posisi[i]<<"->"<<endl;
        }
 cout<<endl;
 getch();
 }
 cout<<"-------------------------------------\n";
break;
}
default:
 cout<<"\nTidak ada dalam pilihan";
 cout<<endl;
 cout<<"-------------------------------------\n";
 }
 }
 while(pilihan!=4);
 getch();
}
