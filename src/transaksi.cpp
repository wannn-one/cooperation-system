#include "include/transaksi.hpp"

Koperasi::Koperasi(){
    this->nik_to_compare = "";
    this->pass_to_compare = "";
    this->simpanan_pokok = 0;
    this->simpanan_wajib = 0;
    this->simpanan_sukarela = 0;
    this->pinjaman = 0;
    this->angsuran = 0;
}

std::string Koperasi::getNikToCompare(){
    return this->nik_to_compare;
}


std::string Koperasi::getPasswordToCompare(){
    return this->pass_to_compare;
}

int Koperasi::getSimpananPokok(){
    return this->simpanan_pokok;
}

void Koperasi::setSimpananPokok(int simpanan_pokok){
    this->simpanan_pokok = simpanan_pokok;
}

int Koperasi::getSimpananWajib(){
    return this->simpanan_wajib;
}

void Koperasi::setSimpananWajib(int simpanan_wajib){
    this->simpanan_wajib = simpanan_wajib;
}

int Koperasi::getSimpananSukarela(){
    return this->simpanan_sukarela;
}

void Koperasi::setSimpananSukarela(int simpanan_sukarela){
    this->simpanan_sukarela = simpanan_sukarela;
}

int Koperasi::getPinjaman(){
    return this->pinjaman;
}

void Koperasi::setPinjaman(int pinjaman){
    this->pinjaman = pinjaman;
}

int Koperasi::getAngsuran(){
    return this->angsuran;
}

void Koperasi::setAngsuran(int angsuran){
    this->angsuran = angsuran;
}