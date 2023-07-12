#include "include/transaksi.hpp"
#include <string>
Transaksi::Transaksi(string jenis_transaksi, string nik, int tanggal, int bulan, int tahun, int nominal) : jenis_transaksi(jenis_transaksi), nik(nik), tanggal(tanggal), bulan(bulan), tahun(tahun), nominal(nominal){

}


void Transaksi::setJenisTransaksi(string jenis_transaksi){
    this->jenis_transaksi = jenis_transaksi;
}

string Transaksi::getJenisTransaksi(){
    return this->jenis_transaksi;
}

void Transaksi::setNik(string nik){
    this->nik = nik;
}

string Transaksi::getNik(){
    return this->nik;
}

void Transaksi::setTanggal(int tanggal){
    this->tanggal = tanggal;
}

int Transaksi::getTanggal(){
    return this->tanggal;
}

void Transaksi::setBulan(int bulan){
    this->bulan = bulan;
}

int Transaksi::getBulan(){
    return this->bulan;
}

void Transaksi::setTahun(int tahun){
    this->tahun = tahun;
}

int Transaksi::getTahun(){
    return this->tahun;
}

void Transaksi::setNominal(int nominal){
    this->nominal = nominal;
}

int Transaksi::getNominal(){
    return this->nominal;
}

