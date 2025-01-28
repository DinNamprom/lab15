#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a, int *b,int *c,int *d) {
	int run,last[4];
	int list[4] = {*a,*b,*c,*d};
	run = rand()%4;
	last[0] = run;
	*a = list[run];
	do {
		run = rand()%4;
	}while (run == last[0]);
	*b = list[run];
	last[1] = run;
	do{
		run = rand()%4;
	}while (run == last[0] || run == last[1]);
	*c = list[run];
	last[2] = run;
	do{
		run = rand()%4;
	}while (run == last[0] || run == last[1] || run == last[2]);
	*d = list[run];
	last[3] = run;
}
