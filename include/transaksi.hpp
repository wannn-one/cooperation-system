#ifndef KOPERASI_HPP
#define KOPERASI_HPP
#include <string>

class Koperasi{
    private:
        std::string nik_to_compare;
        std::string pass_to_compare;
        int simpanan_pokok;
        int simpanan_wajib;
        int simpanan_sukarela;
        int pinjaman;
        int angsuran;
    public:
        Koperasi();

        std::string getNikToCompare();
        void setNik(std::string nik_to_compare);

        std::string getPasswordToCompare();
        void setPassword(std::string pass_to_compare);

        int getSimpananPokok();
        void setSimpananPokok(int simpanan_pokok);

        int getSimpananWajib();
        void setSimpananWajib(int simpanan_wajib);

        int getSimpananSukarela();
        void setSimpananSukarela(int simpanan_sukarela);

        int getPinjaman();
        void setPinjaman(int pinjaman);

        int getAngsuran();
        void setAngsuran(int angsuran);
};

#endif