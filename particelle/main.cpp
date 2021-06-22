#include "funzione.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {

float elementi=ContaElementi("particelle.dat");
int righe=ContaRighe("particelle.dat");

cout << "elementi file: " <<  elementi << endl << "righe file: " << righe << endl;

particella *p=new particella[righe];

ifstream in("particelle.dat");
	if(!in) {
	cout << "cannot open" << endl;
	exit(0);}
	else {
	for(int i=0; i<righe; i++) {
	in >> p[i].x0 >> p[i].y0 >> p[i].vx >> p[i].vy;}
	if(in.eof()) {
	cout << "elementi caricati" << endl;
	exit(0);}
}

for(int i=0; i<righe; i++) {
	cout << p[i].x0 << " " << p[i].y0 << " " << p[i].vx << " " << p[i].vy << endl;
}

//2

int dentro=screma(p,righe);
cout << " inside " << dentro+1 << endl;
cout << " outside " << righe-dentro-1 << endl;

particella *p1=new particella[dentro+1];
for(int i=0; i<dentro+1; i++) {
	p1[i].x0=p[i].x0+1.5*p[i].vx;
	p1[i].y0=p[i].y0+1.5*p[i].vy;
	cout << p1[i].x0 << " " << p1[i].y0 << endl;
}

int dentro1=screma(p1,dentro+1);
cout << "inside " << dentro1+1 << endl;
cout << "outside " << dentro-dentro1-1 << endl;

delete[] p1;
delete[] p;
return 0;

}
