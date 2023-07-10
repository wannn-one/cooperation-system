// Judul    : Sistem Koperasi Simpan Pinjam Alpro Sejahtera
// Oleh     : Kelompok 4219
// Najma Amira Mumtaz [A11.2022.14708]
// Naris Hafidz Fahrezi [A11.2022.14709]
// Muhammad Alif Al Husain [A11.2022.14718]
// Rafie Tegar Virgananda SP [A11.2022.14845]

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "include/anggota.hpp"
#include "include/transaksi.hpp"
#include "include/function.hpp"
using namespace std;

int main(){
    vector<Anggota> recAnggota;
    vector<Koperasi> recKoperasi;

    string nama, nik, password;
    int id = 0; 
    int tanggal, bulan, tahun, saldo;

    while (1){
        system("cls || clear");
        cout << "Selamat datang di Sistem Koperasi Simpan Pinjam Alpro Sejahtera" << endl;
        cout << "Silahkan pilih menu yang tersedia" << endl;
        cout << "1. Keanggotaan" << endl;
        cout << "2. Transaksi" << endl;
        cout << "3. Laporan Transaksi" << endl;
        cout << "4. Laporan Keuangan" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan anda: ";
        int pilihan; cin >> pilihan;

        
        switch (pilihan){
            case 1:
                system("cls || clear");
                cout << "1. Tambah Anggota" << endl;
                cout << "2. Cari Anggota" << endl;
                cout << "3. Tampilkan Anggota" << endl;
                cout << "4. Hapus Anggota" << endl;
                cout << "5. Kembali" << endl;
                cout << "Masukkan pilihan anda: ";
                cin >> pilihan;

                switch (pilihan){
                    case 1:
                        while (true){
                            id++;
                            system("cls || clear");
                            cout << "Masukkan nama anda: "; getline(cin >> ws, nama); cout << endl; 
                            cout << "Masukkan NIK anda: "; cin >> nik; cout << endl;
                            cout << "Masukkan password anda: "; cin >> password; cout << endl;
                            while (true){
                                cout << "Masukkan tanggal/bulan/tahun lahir anda (dd mm yy): "; cin >> tanggal >> bulan >> tahun; cout << endl;
                                if (dateValidation(tanggal, bulan, tahun)){
                                    break;
                                }else{
                                    cout << "Tanggal yang anda masukkan tidak valid" << endl;
                                    continue;
                                }
                            }
                            
                            Anggota anggota(id, nama, nik, password, tanggal, bulan, tahun, saldo);
                            recAnggota.push_back(anggota);
                            
                            cout << "Anggota berhasil ditambahkan" << endl;

                            cout << "Apakah anda ingin menambahkan anggota lagi? (y/n) "; char pilihan; cin >> pilihan;
                            if (pilihan == 'y'){
                                continue;
                            } else {
                                break;
                            }

                        }
                        saveAnggotaToDatabase(recAnggota);
                        break;
                    case 2:
                        loadAnggotaFromDatabase(recAnggota);
                        cout << "Masukkan NIK anggota yang ingin dicari: "; cin >> nik; cout << endl;
                        for (int i = 0; i < recAnggota.size(); i++){
                            if (recAnggota[i].getNik() == nik){
                                cout << "Nama                       : " << recAnggota[i].getNama() << endl;
                                cout << "NIK                        : " << recAnggota[i].getNik() << endl;
                                cout << "Password                   : " << recAnggota[i].getPassword() << endl;
                                cout << "Tanggal Lahir              : " << recAnggota[i].getTanggal() << "/" << recAnggota[i].getBulan() << "/" << recAnggota[i].getTahun() << endl;
                                cout << "Saldo                      : " << recAnggota[i].getSaldo() << endl;
                                break;
                            } else {
                                cout << "Anggota tidak ditemukan" << endl;
                                break;
                            }
                        }
                        break;
                    case 3:
                        loadAnggotaFromDatabase(recAnggota);
                        displayAnggota(recAnggota);
                        break;
                    case 4:
                        loadAnggotaFromDatabase(recAnggota);
                        cout << "Masukkan NIK anggota yang ingin dihapus: "; cin >> nik; cout << endl;
                        for (int i = 0; i < recAnggota.size(); i++){
                            if (recAnggota[i].getNik() == nik){
                                recAnggota.erase(recAnggota.begin() + i);
                                cout << "Anggota berhasil dihapus" << endl;
                                break;
                            } else {
                                cout << "Anggota tidak ditemukan" << endl;
                                break;
                            }
                        }
                        saveAnggotaToDatabase(recAnggota);
                        break;
                    case 5:
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                cout << "Terima kasih telah menggunakan Sistem Koperasi Simpan Pinjam Alpro Sejahtera" << endl;
                return 0;
                break;
            default:
                break;
        }

    }
    return 0;
}
