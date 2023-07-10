// get current year with library <ctime> and comparable with yyInput

#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include "anggota.hpp"
#include "transaksi.hpp"

using namespace std;

time_t now = time(0);
int currentYear = 1900 + localtime(&now)->tm_year;
const int minYear = 1900;

const char *pathDatabaseAnggota = "database/database_anggota.txt";

bool isLeap(int yyInput){
	return (((yyInput % 4 == 0) && (yyInput % 100 != 0)) || (yyInput % 400 == 0));
}

bool dateValidation(int ddInput, int mmInput, int yyInput){
	if ((yyInput > currentYear) || (yyInput < minYear)) {
		return false;
	}
	if ((mmInput < 1) || (mmInput > 12)){
		return false;
	}
	if ((ddInput < 1) || (ddInput > 31)){
		return false;
	}
	if (mmInput == 2){
		if (isLeap(yyInput)){
			return (ddInput <= 29);
		}else{
			return (ddInput <= 28);
		}
	}
	if ((mmInput == 4) || (mmInput == 6) || (mmInput == 9) || (mmInput == 11)){
		return (ddInput <= 30);
	}
	
	return true;
}

void saveAnggotaToDatabase(vector<Anggota>& anggotaVector) {
    ofstream databaseFile(pathDatabaseAnggota);
    int id = 1;
    if (databaseFile.is_open()) {
        for (int i = 0; i < anggotaVector.size(); i++) {
            databaseFile << id << " " 
                         << anggotaVector[i].getNama() << " "
                         << anggotaVector[i].getNik() << " " 
                         << anggotaVector[i].getPassword() << " " 
                         << anggotaVector[i].getTanggal() << " " 
                         << anggotaVector[i].getBulan() << " " 
                         << anggotaVector[i].getTahun() << " " 
                         << anggotaVector[i].getSaldo() << endl;
            id++;
    }
        databaseFile.close();
        cout << "Data anggota berhasil disimpan di database." << endl;
    } else {
        cout << "Gagal membuka database_anggota.txt" << endl;
    }
}

void loadAnggotaFromDatabase(vector<Anggota>& anggotaVector) {
    ifstream databaseFile(pathDatabaseAnggota);
    if (databaseFile.is_open()) {
        anggotaVector.clear();
        int id, tanggal, bulan, tahun, saldo;
        string nama, nik, password;
        while (databaseFile >> id >> nama >> nik >> password >> tanggal >> bulan >> tahun >> saldo) {
            Anggota anggota(id, nama, nik, password, tanggal, bulan, tahun, saldo);
            anggotaVector.push_back(anggota);
        }
        databaseFile.close();
        cout << "Data anggota berhasil diambil dari database." << endl;
    } else {
        cout << "Gagal membuka database_anggota.txt" << endl;
    }
}

void displayAnggota(vector<Anggota>& anggotaVector) {
    int id = 1;
    for (int i = 0; i < anggotaVector.size(); i++) {
        cout << "ID                         : " << id << endl;
        cout << "Nama                       : " << anggotaVector[i].getNama() << endl;
        cout << "NIK                        : " << anggotaVector[i].getNik() << endl;
        cout << "Password                   : " << anggotaVector[i].getPassword() << endl;
        cout << "Tanggal Lahir              : " << anggotaVector[i].getTanggal() << "/" << anggotaVector[i].getBulan() << "/" << anggotaVector[i].getTahun() << endl;
        cout << "Saldo                      : " << anggotaVector[i].getSaldo() << endl;
        id++;
        cout << endl;
    }
}