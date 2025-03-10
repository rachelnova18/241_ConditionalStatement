#include <iostream> // Library iostream
using namespace std; //standart namespace

float phi = 3.14;
float r, luas;

// prosedur input
void inputData() 
{
    cout << "Enter Value of r : ";
    cin >> r;
}

// fungsi hitung luas / function for counting area
float hitungLuasLingkaran()
{
    return phi * r * r;

}

// with parameter
float HitungLuasLingkaranParameter(float x)
{
    return phi * x * x;

}

// function for check status of circle
string StatusBesaranLingkaran(float Luas)
{
    if (luas > 30) 
    {
        return "Besar";
    }
    else 
    {
        return "kecil";
    }
    }

    // prosedur output
void outputDataParameter() 
{
    cout << "Luas Lingkaran = " << HitungLuasLingkaranParameter(r);
    float luas_final = HitungLuasLingkaranParameter(r);
    cout << "Besaran Limgkarannya" << StatusBesaranLingkaran (luas_final);
}

int main () 
{
    inputData();
    outputDataParameter();
}