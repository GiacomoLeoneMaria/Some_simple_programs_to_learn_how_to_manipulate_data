#include <iostream>
#include <fstream>
#include "funzioni.h"
#include <cmath>

using namespace std;

int main() {

float elementi=ContaElementi("puntimassa.dat");
int righe=ContaRighe("puntimassa.dat");

punto *p=new punto[righe];

ifstream in("puntimassa.dat");
	if(!in) {
	cout << "cannot open" << endl;
	exit(0);}
	else {
	for(int i=0; i<righe; i++) {
	in >> p[i].x >> p[i].y >> p[i].m;}
	if(in.eof()) {
	cout << "elementi caricati" << endl;
	exit(0);}
}

//max and min array 
int max=0; int min=0;
for(int i=0; i<righe; i++) {
	if(p[i].x>p[max].x) {
		i=max;}
	if(p[i].x<p[min].x) {
		i=min;}	
}
cout << p[max].x << " " << p[min].x << endl;

//barycenter
float M=0; float xb=0; float yb=0;
for(int i=0; i<righe; i++) {
	M+=p[i].m;
	xb+=p[i].x*p[i].m;
	yb+=p[i].y*p[i].m;
}
	xb=xb/M;
	yb=yb/M;

cout << "coordinates barycenter " << xb << " " << yb << endl;

sort(p,xb,yb,righe);

for(int i=0; i<righe; i++) {
	cout << distanza(p[i],xb,yb) << endl;}

float media=0;
for(int i=0; i<righe; i++) {
	media+=distanza(p[i],xb,yb);
	}
	media=media/righe;

float sigma=0;
for(int i=0; i<righe; i++) {
	sigma+=pow(distanza(p[i],xb,yb)-media,2);
	}
	sigma=sqrt(sigma/righe);

cout << "mean" << media << endl;
cout << "dev.standard " << sigma << endl;
	
int sop=screma(p,xb,yb,sigma,righe);

cout << "point between two sigma " << sop+1 << endl;
cout << "points further away than two sigma" << righe-sop-1 << endl;


delete[] p;
return 0;
}




