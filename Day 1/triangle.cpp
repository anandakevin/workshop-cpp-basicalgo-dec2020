#include <stdio.h>

void triangle2(){
	for(int i = 0; i < 25; i++){
		for(int j = 25; j > i; j--) printf("*");
		printf("\n");
	}
}

void rectangle(){
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < 50; j++) printf("*");
		printf("\n");
	}
}

void jajargenjang(){
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < i; j++){
			printf(" ");
		}
		for(int j = i; j < 25 	; j++) printf("*");
		printf(" i = %d\n", i);
	}
}

void triangle1(){
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	// triangle2();
	jajargenjang();
	rectangle();
}
