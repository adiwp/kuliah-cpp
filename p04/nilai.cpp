#include<iostream>
#include<iomanip>
using namespace std;

main() {
	double t1 , t2, t3, t4, t5, q1, q2, absen, uts, uas;
	double rataTugas;
	double nilaiAkhir;
	
	cout << "Masukkan nilai T1: "; cin >> t1;
	cout << "Masukkan nilai T2: "; cin >> t2;
	cout << "Masukkan nilai T3: "; cin >> t3;
	cout << "Masukkan nilai T4: "; cin >> t4;
	cout << "Masukkan nilai T5: "; cin >> t5;
	cout << "Masukkan nilai Q1: "; cin >> q1;
	cout << "Masukkan nilai Q2: "; cin >> q2;
	
	cout << "Masukkan presentasi absen: "; cin >> absen;
	cout << "Masukkan nilai UTS: "; cin >> uts;
	cout << "Masukkan nilai UAS: "; cin >> uas;
	cout << endl;
	
	rataTugas = (float) ( t1 + t2 + t3 + t4 + t5 + q1 + q2 ) / (float) 7;
	
	nilaiAkhir = 0.05 * absen + 0.35 * rataTugas + 0.25 * uts + 0.35 * uas;
	
	cout << fixed << setprecision(3) ;
	
	cout << "Rata-rata Tugas: " << rataTugas << endl;
	cout << "Nilai Akhir (Angka): " << nilaiAkhir << endl;
	
	if (nilaiAkhir >= 85 && nilaiAkhir <= 100)
		cout << "A" << endl;
	else if (nilaiAkhir >= 80 && nilaiAkhir < 85)
		cout << "A-" << endl;
	else if (nilaiAkhir >= 75 && nilaiAkhir < 80)
		cout << "B+" << endl;
	else if (nilaiAkhir >= 70 && nilaiAkhir < 75)
		cout << "B" << endl;
	else if (nilaiAkhir >= 65 && nilaiAkhir < 70)
		cout << "B-" << endl;
	else if (nilaiAkhir >= 60 && nilaiAkhir < 65)
		cout << "C+" << endl;
	else if (nilaiAkhir >= 55 && nilaiAkhir < 60)
		cout << "C" << endl;
	else if (nilaiAkhir >= 50 && nilaiAkhir < 55)
		cout << "C-" << endl;
	else if (nilaiAkhir >= 40 && nilaiAkhir < 50)
		cout << "D" << endl;
	else
		cout << "E" << endl;
}