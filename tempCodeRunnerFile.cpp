void shuffle(int &a, int &b,int &c,int &d) {
	srand(time(0));
	int n1,n2,n3,n4;
	n1 = rand()%4;
	if (n1+1 >= 4) n2 = 0;
	else n2 = n1+1;
	if (n1+2 >= 4) n3 = 0;
	else n3 = n1+2;
	if (n1+3 >= 4) n4 = 0;
	else n4 = n1+3;
	int list[4] = {a,b,c,d};
	a = list[n1];
	b = list[n2];
	c = list[n3];
	d = list[n4];
}