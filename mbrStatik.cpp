#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
    public:
       static int nim;
       int id;
       string nama;

       void setID();

       void printAll();
       Mahasiswa(string pnama):nama(pnama){

             setID();
       }
};

int Mahasiswa::nim = 20;
void Mahasiswa::setID()
{
   id = nim++;
}

int main(){
     Mahasiswa mhs1("Lia Kurnia");
     Mahasiswa mhs2("Asroni");
     Mahasiswa mhs3("Andi Kurniawan");
     Mahasiswa mhs4("Joko Purba");

        mhs1.printAll();

        mhs2.printAll();
        mhs3.printAll();
        mhs4.printAll();
        return 0;
}