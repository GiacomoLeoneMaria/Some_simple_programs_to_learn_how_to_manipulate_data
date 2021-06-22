#include "funzione.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

//count elements
float ContaElementi(const char *filename) {
	float elementi;
	float tmp;
	ifstream in;
	in.open(filename);
	in>>tmp;
	while(!in.eof()) {
	elementi++;
	in>>tmp;}
	in.close();

	return elementi;
}

//count rows
int ContaRighe(const char *filename) {
	float righe;
	string s;
	ifstream in;
	in.open(filename);
	getline(in,s);
	while(!in.eof()) {
	righe++;
	getline(in,s);}
	in.close();
	
	return righe;
}

bool Rettangolo(particella p) {
	return p.x0 >=-1 && p.x0<=1 && p.y0>=-0.5 && p.y0<=0.5;
}

//swap
void scambia(particella &a, particella &b) {
	particella tmp=a;
	a=b;
	b=tmp;
}

//selection
int screma(particella *p, int dim) {
	int b=dim-1;
	for(int i=0; i<=b; i++) {
		if(!Rettangolo(p[i])) {
		scambia(p[i--],p[b--]);}
	}
	
	return b;
}

			


