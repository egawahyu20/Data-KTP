#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct data_ktp{
char nik[20];	
char nama[50];
char tempat[10];
short Tahun;
int bulan;
int tanggal;
char jk[1];
char alamat[30];
char rt_rw[7];
char desa_kelurahan[20];
char kecamatan[20];
char agama[10];
char sp[8];
char pekerjaan[15];
char kewarganegaraan[20];};

data_ktp ktp[10];

int main()
{

	system("color 02");
	int pilihan;
	int a=0;
	int pilih;
	
	MainMenu:
	
	system("cls");
	cout <<"============= Progam Data KTP =============" << endl;
	cout << "1. Menambah data \n2. Mencari data berdasarkan tahun kelahiran \n3. Menampilkan data berdasarkan L dan P \n4. Mengedit data\n";
	cin >> pilihan;
	switch (pilihan){
		case 1:
			system("cls");
			cout<<"Masukkan Data: "<< endl;
			cout <<"NIK                 : "; fflush(stdin); gets(ktp[a].nik);
			cout <<"Nama                : "; fflush(stdin); gets(ktp[a].nama);
			cout <<"Tempat              : "; fflush(stdin); gets(ktp[a].tempat);
			cout <<"Tahun               : "; cin >> ktp[a].Tahun;
			cout <<"Bulan               : "; cin >> ktp[a].bulan;
			cout <<"Tanggal             : "; cin >> ktp[a].tanggal;
			cout <<"Jenis kelamin       : "; fflush(stdin); gets(ktp[a].jk);
			cout <<"Alamat              : "; fflush(stdin); gets(ktp[a].alamat);
			cout <<"RT/RW               : "; fflush(stdin); gets(ktp[a].rt_rw);
			cout <<"Desa/Kelurahan      : "; fflush(stdin); gets(ktp[a].desa_kelurahan);
			cout <<"Kecamatan           : "; fflush(stdin); gets(ktp[a].kecamatan);
			cout <<"Agama               : "; fflush(stdin); gets(ktp[a].agama);
			cout <<"Status perkawinan   : "; fflush(stdin); gets(ktp[a].sp);
			cout <<"Pekerjaan           : "; fflush(stdin); gets(ktp[a].pekerjaan);
			cout <<"Kewarganegaraan     : "; fflush(stdin); gets(ktp[a].kewarganegaraan);
			a=a+1;
			aa:
		    cout << "\n\n1. Kembali ke menu utama \n2. keluar\n";
            cin >> pilih;
		      if (pilih==1){
			    goto MainMenu;
		        }
		      else if(pilih==2){
			    exit(0);
		        }
		      else
		 	  goto aa;
		case 2: 
			
		case 3:
		case 4://edit
		{
     system ("cls");
     
     char temp[20];
     cout<<"\n PENCARIAN DATA PENDUDUK\n";
     cout<<" ____________________________\n\n";
     cout<<" Masukan NIK : "; cin>>temp;
     cout<<endl;

     for(int i=0;i<=a;i++)
  {
      if((int)temp==(int)ktp[i].nik)
   {
       cout<<" Data di temukan pada registrasi ktp ke-"<<i+1<<endl<<endl;
       cout<<"Masukkan Data: "<< endl;
					cout <<"NIK                 : " << ktp[i].nik << endl;
					cout <<"Nama                : " << ktp[i].nama << endl;
					cout <<"Tempat              : " << ktp[i].tempat << endl;
					cout <<"Tahun               : " << ktp[i].Tahun << endl;
					cout <<"Bulan               : " << ktp[i].bulan << endl;
					cout <<"Tanggal             : " << ktp[i].tanggal << endl;
					cout <<"Jenis kelamin       : " << ktp[i].jk << endl;
					cout <<"Alamat              : " << ktp[i].alamat << endl;
					cout <<"RT/RW               : " << ktp[i].rt_rw << endl;
					cout <<"Desa/Kelurahan      : " << ktp[i].desa_kelurahan << endl;
					cout <<"Kecamatan           : " << ktp[i].kecamatan << endl;
					cout <<"Agama               : " << ktp[i].agama << endl;
					cout <<"Status perkawinan   : " << ktp[i].sp << endl;
					cout <<"Pekerjaan           : " << ktp[i].pekerjaan << endl;
					cout <<"Kewarganegaraan     : " << ktp[i].kewarganegaraan << endl << endl;
      }
     }
     cout<<" DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
     cout<<" ________________________________________\n\n";
			
			   	   	break;}
		default:
			goto MainMenu;			
	}
	return 0;
}