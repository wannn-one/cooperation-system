#include <iostream>
#include "include/anggota.hpp"

Anggota::Anggota(std::string nama, std::string nik, std::string password, int tanggal, int bulan, int tahun, int saldo, int saldo_dipinjam) : nama(nama), nik(nik), password(password), tanggal(tanggal), bulan(bulan), tahun(tahun), saldo(saldo), saldo_dipinjam(saldo_dipinjam){
    this->saldo = 50000;
    this->saldo_dipinjam = 0;
}

// ID

// int Anggota::getId(){
//     return this->id;
// }

// Nama

void Anggota::setNama(std::string nama){
    this->nama = nama;
}

std::string Anggota::getNama(){
    return this->nama;
}

// NIK

void Anggota::setNik(std::string nik){
    this->nik = nik;
}

std::string Anggota::getNik(){
    return this->nik;
}

// Password

void Anggota::setPassword(std::string password){
    this->password = password;
}

std::string Anggota::getPassword(){
    return this->password;
}

// DD MM YY untuk mempermudah penambahan tanggal

void Anggota::setDDMMYY(int tanggal, int bulan, int tahun){
    this->tanggal = tanggal;
    this->bulan = bulan;
    this->tahun = tahun;
}

// Tanggal

int Anggota::getTanggal(){
    return this->tanggal;
}

// Bulan

int Anggota::getBulan(){
    return this->bulan;
}

// Tahun

int Anggota::getTahun(){
    return this->tahun;
}

// Saldo

void Anggota::setSaldo(int saldo){
    this->saldo = saldo;
}

int Anggota::getSaldo(){
    return this->saldo;
}

// saldo_dipinjam

void Anggota::setSaldoDipinjam(int saldo_dipinjam){
    this->saldo_dipinjam = saldo_dipinjam;
}

int Anggota::getSaldoDipinjam(){
    return this->saldo_dipinjam;
}