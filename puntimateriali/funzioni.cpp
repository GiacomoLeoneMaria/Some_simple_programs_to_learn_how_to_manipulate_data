#include "funzioni.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

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

float distanza(punto p, float x, float y) {
	return sqrt(pow(p.x-x,2)+pow(p.y-y,2));}

void scambia(punto &a, punto &b) {
	punto tmp=a;
	a=b;
	b=tmp;
}

//swap in function from the distance to the barycenter
void sort(punto *p, float x, float y, int dim) {
	int min=0;
	for(int i=0; i<dim-1; i++) {
		min=i;
	for(int j=i+1; j<dim; j++) {
	if(distanza(p[min],x,y)>distanza(p[j],x,y)) {
		min=j;}
		}
	scambia(p[min],p[i]);
	}
}	

//selection
int screma(punto *p, float x, float y, float sigma, int dim) {
	int b=dim-1;
	for(int i=0; i<=b; i++) {
		if(distanza(p[i],x,y)>2*sigma) {
		scambia(p[i--],p[b--]);}
	}
	return b;
}	
	



