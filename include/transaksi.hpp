#ifndef TRANSAKSI_HPP
#define TRANSAKSI_HPP
#include <string>
using namespace std;

class Transaksi{
    private:
        string jenis_transaksi;
        string nik;
        int tanggal;
        int bulan;
        int tahun;
        int nominal;
    public:
        Transaksi(string jenis_transaksi, string nik, int tanggal, int bulan, int tahun, int nominal);

        string getJenisTransaksi();
        string getNik();
        int getTanggal();
        int getBulan();
        int getTahun();
        int getNominal();

        void setJenisTransaksi(string jenis_transaksi);
        void setNik(string nik);
        void setTanggal(int tanggal);
        void setBulan(int bulan);
        void setTahun(int tahun);
        void setNominal(int nominal);
};

#endif