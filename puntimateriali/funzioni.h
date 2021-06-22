struct punto{
	float x;
	float y;
	float m;
};

float ContaElementi(const char *filename);
int ContaRighe(const char *filename);
float distanza(punto p, float x, float y);
void scambia(punto &a, punto &b);
void sort(punto *p, float x, float y, int dim);
int screma(punto *p, float x, float y, float sigma, int dim);
