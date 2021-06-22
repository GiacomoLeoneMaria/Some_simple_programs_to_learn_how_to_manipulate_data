struct particella {
	float x0;
	float y0;
	float vx;
	float vy;
};

float ContaElementi(const char *filename);
int ContaRighe(const char *filename);
bool Rettangolo(particella p);
void scambia(particella &a, particella &b);
int screma(particella *p, int dim);
