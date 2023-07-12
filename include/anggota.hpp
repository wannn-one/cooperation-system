#ifndef ANGGOTA_HPP
#define ANGGOTA_HPP
#include <string>
#include <vector>

class Anggota{
    private:
        // int id;
        std::string nama;
        std::string nik;
        std::string password;
        int tanggal;
        int bulan;
        int tahun;
        int saldo;
        int saldo_dipinjam;
        
    public:
        Anggota(std::string nama, std::string nik, std::string password, int tanggal, int bulan, int tahun, int saldo, int saldo_dipinjam);
        
        // int getId();

        std::string getNama();
        void setNama(std::string nama);

        std::string getNik();
        void setNik(std::string nik);

        std::string getPassword();
        void setPassword(std::string password);

        void setDDMMYY(int tanggal, int bulan, int tahun);

        int getTanggal();
        int getBulan();
        int getTahun();

        int getSaldo();
        void setSaldo(int saldo);

        int getSaldoDipinjam();
        void setSaldoDipinjam(int saldo_dipinjam);
};

#endif