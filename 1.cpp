#include <iostream>

using namespace std;

struct CoordonateGPS {
	int latitudine;
	int longitudine;
	float altitudine;
	string locatie;
};

/*                   
tip returnat; nume; parametru -> Header

int a = 20;
int *pa = &a;
int* p=new int(50);


*/
void afisareCoordonateGPS(CoordonateGPS l) {

	cout << "Latitudine: " << l.latitudine << endl;
	cout << "Longitudine: " << l.longitudine << endl;
	cout << "Altitudine: " << l.altitudine << endl;
	cout << "Locatie: " << l.locatie << endl;

}

void modificaAltitudine(CoordonateGPS *l, float nouaAltitudine) {
	l->altitudine = nouaAltitudine; // -> = (derefentiere + accesare)
}

void modificaAltitudineRef(CoordonateGPS& l, float nouaAltitudine) {
	l.altitudine = nouaAltitudine;
}

int main() {
	CoordonateGPS l;
	l.latitudine = 46;
	l.longitudine = 22;
	l.altitudine = 1010;
	l.locatie = "Predeal";

	afisareCoordonateGPS(l);

	CoordonateGPS l2;
	cout << "Introduceti latitudinea\n";
	cin >> l2.latitudine;
	cout << "Introduceti longitudinea\n";
	cin >> l2.longitudine;
	cout << "Introduceti altitudinea\n";
	cin >> l2.altitudine;
	cout << "Introduceti locatia\n";
	cin >> l2.locatie;


	afisareCoordonateGPS(l2);

	modificaAltitudine(&l2, -20);
	modificaAltitudineRef(l2, 3000);
	afisareCoordonateGPS(l2);


	return 0;
}