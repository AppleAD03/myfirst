#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define FPS 2

void delay(double time){
	clock_t t1,t2;
	t1 = clock();
	while(1){
		t2 = clock();
		if(1.0 * (t2-t1)/(CLOCKS_PER_SEC) >= time){
			break;
		}
	}
}

int main(){
	char c;
	unsigned int x=0, y=0, w=1, h=1;
	int i, j;
	clock_t t1, t2;
	double t;
	system("cls");
	while(1){
		t1 = clock();
		system("cls");
		printf("Press 'x' to quit\nPress 'w-a-s-d' for vertical and horizontal movements\nPress 'i-j-k-l' to change the shape\n");
		for(i=0;i<=y;i++){
			printf("\n");
		}
		for(i=0;i<h;i++){
			for(j=0;j<x;j++){
				printf(" ");
			}
			for(j=0;j<w;j++){
				printf("#");
			}
			printf("\n");
		}
		
		c = getch();
		/* --------------------------------------------------------------------------------- */
		if(c == 's'){
			y++;
		}
		if(c == 'w'){
			if(y > 0){
				y--;
			}
		}
		if(c == 'a'){
			if(x > 0){
				x--;
			}
		}
		if(c == 'd'){
			x++;
		}
		//---------------//
		if(c == 'i'){
			h++;
		}
		if(c == 'k'){
			if(h > 1){
				h--;
			}
		}
		if(c == 'j'){
			if(w > 1){
				w--;
			}
		}
		if(c == 'l'){
			w++;
		}
		
		if(c == 'x'){
			break;
		}
		/* --------------------------------------------------------------------------------- */
		t2 = clock();
		t = 1.0 * (t2 - t1)/(CLOCKS_PER_SEC);
		printf("\n%f",t);
		delay(1.0/1 - t);
	}
	return 0;
}