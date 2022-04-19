#include <iostream>

using namespace std;

//prosedur untuk menampilkan judul
void judul(){
	cout << "=================================================" << endl;
	cout << "|                SELAMAT DATANG                 |" << endl;
	cout << "|                  DI PROGRAM                   |" << endl;
	cout << "|         ~ PENDATAAN PESERTA VAKSIN ~          |" << endl;
	cout << "=================================================" << endl;
}

//prosedur untuk menampilkan menu
void menu(){
	cout << "\n*************************************************" << endl;
	cout << "*                  M  E  N  U                   *" << endl;
	cout << "*************************************************" << endl;
	cout << "*		[1] Tambah Data                 *" << endl;
	cout << "*		[2] Tampilkan Data              *" << endl;
	cout << "*		[3] Ubah Data                   *" << endl;
	cout << "*		[4] Hapus Data                  *" << endl;
	cout << "*		[5] Exit Program                *" << endl;
	cout << "*************************************************" << endl;
}

//deklarasi struct
struct vaksin{
	string nama,  jenis_vaksin;
	int umur, dosis;
};
	//struct dengan array
	vaksin batas[100];
	int a, c, banyakdata;

//prosedur untuk menambahkan data	
void tambahdata(){
	cout << "\nBanyaknya Data Yang Ingin Ditambahkan : "; cin >> banyakdata;
	for(c = 0; c < banyakdata; c++){		//perulangan tambah data
	cout << "\nData ke-" << c+1 << endl;
	cout << "Nama Peserta\t: "; cin >> batas[a].nama;
	cout << "Umur Peserta\t: "; cin >> batas[a].umur;
	cout << "Jenis Vaksin\t: "; cin >> batas[a].jenis_vaksin;
	cout << "Dosis ke\t: "; cin >> batas[a].dosis;
	cout<<"\n=========== Data Berhasil Ditambahkan ===========" << endl;
	a++;
	}
}

//prosedur untuk menamampilkan data
void tampildata(){
	int i;		//deklarasi variabel
	for(i = 0; i < a; i++){			//perulangan tampilkan data
	cout << "\nData ke-" << i+1 << endl;
	cout << "Nama Peserta\t: " << batas[i].nama << endl;
	cout << "Umur Peserta\t: " << batas[i].umur << endl;
	cout << "Jenis Vaksin\t: " << batas[i].jenis_vaksin << endl;
	cout << "Dosis ke\t: " << batas[i].dosis << endl;
	}
}

//prosedur untuk mengubah data
void ubahdata(){
	int dataperubahan, l;		//deklarasi variabel
	cout << "\nData Ke Berapa Yang Ingin Diubah : "; cin >> dataperubahan;
	l = dataperubahan-1;
	cout << "\nSILAHKAN MASUKKAN DATA BARU!!" << endl;
	cout << "Nama Peserta\t: "; cin >> batas[l].nama;
	cout << "Umur Peserta\t: "; cin >> batas[l].umur;
	cout << "Jenis Vaksin\t: "; cin >> batas[l].jenis_vaksin;
	cout << "Dosis ke\t: "; cin >> batas[l].dosis;
	cout<<"\n============= Data Berhasil Diubah =============" << endl;
}	

//prosedur untuk menghapus data
void hapusdata(){
	int hapus, y;		//deklarasi variabel
	cout << "Hapus data ke-"; cin >> hapus;
	y = hapus-1;
	a--;
	for(int i = y; i < a; i++)		//perulangan hapus data
	{batas[i] = batas[i+1];}
	cout<<"\n========== Data ke-"<< hapus <<" Berhasil Dihapus ===========" << endl;
}

//fungsi utama program	
int main(){
	judul();	//memanggil prosedur
	awal:
	menu();		//memanggil prosedur
	//deklarasi variabel
	int pilih;
	char keluar;
	
	//percabangan pilihan menu
	cout << "\nMasukkan Pilihan : "; cin >> pilih;
	if(pilih==1){
		tambahdata(); goto awal;
	}
	if(pilih==2){
		tampildata(); goto awal;
	}
	if(pilih==3){
		ubahdata(); goto awal;
	}
	if(pilih==4){
		hapusdata(); goto awal;
	}
	if(pilih==5){
    cout << "\nApakah Anda Yakin Keluar Dari Program?? [y/n] : "; cin >> keluar;
    cout << endl;
    	if(keluar=='y'||keluar=='Y'){
			cout << "\n========= ANDA TELAH KELUAR DARI PROGRAM =========" << endl;
			cout << "=== Terima Kasih Telah Menggunakan Program ^_^ ===" << endl;
		}
    	if(keluar=='n'||keluar=='N'){
			goto awal;
		}
	}
	else{
		cout << "\n------ Pilihan Yang Anda Masukkan Salah !!! ------" << endl;
		cout << "\nSilahkan Masukkan Pilihan Dengan Benar [1/2/3/4/5]" << endl; goto awal;
	}
}
