#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;
}

string Status_lulus(float r){
  if(r >= 60)
  return "lolos";
  else if (r >= 50)
return "Lolos diprtibangkan";
else if (r >= 40)
return "Lolos tetapi martikulasi 1 tahun";
else
return "gagal";

}

int main(){
    float nilBI,nilMT,rerata;
    string status;
    cout <<"Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout <<"masukkan nilai matematika = ";
    cin >> nilMT;

}