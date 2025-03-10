#include <iostream>
using namespace std;

float phi = 3.14;
float r, luas;

// prosedur input
void inputData() 
{
    cout << "Enter Value of r : ";
    cin >> r;
}

// fungsi hitung luas 
float hitungLuasLingkaran()
{
    return phi * r * r;
}

// with parameter
float hitungLuasLingkaran(float x)
{
    return phi * x * x;
}

// prosedur output
void outputData() 
{
    cout << "Luas Lingkaran = " << hitungLuasLingkaran();
}

// with parameter
void outputDataParameter()
{
    cout << "Luas Lingkaran = " << hitungLuasLingkaran();
}

int main () 
{
    inputData();
    outputData();
    outputDataParameter();
}