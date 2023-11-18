#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
    //int %d
    //char %c
    //array of char %s
    //double %d
    //float %f
    //bool, boolean, TRUE/1, FALSE/0

	//bisa diubah, const (konstan)

	const int contohVarConst = 100;

    int coba1; //deklarasi
    int angka2 = 10; //inisialisasi
    coba1 = 8; //inisialisasi

	// printf("%d\n", coba1);
	// scanf("%d", &coba1); fflush(stdin);
	// printf("%d", coba1);
	int i;
	// for(i = 0; i < 100; i++) {
	// 	printf("Iterasi ke %d: %d\n", i, (i*3));
	// }
	// i = 25;
	// do{
	// 	printf("do while i: %d\n", i);
	// 	i++; // i += 1 sama dengan i = i + 1;
	// } while(i <= 50);
	// i = 25;
	// while(i <= 50) {
	// 	printf("while i: %d\n", i);
	// 	i++; // i += 1 sama dengan i = i + 1;
	// }
	int umur;
	printf("Masukkan umur anda: ");
	scanf("%d", &umur);
	if(umur < 11){
		if(umur > 4) {
			printf("Anda bukan balita\n");
		}
		else if (umur < 3) {
			printf("Anda masih balita\n");
		}
		else {
			printf("Anda masih merupakan anak - anak");
		}
	}
	else if(umur > 11 && umur <= 19) {
		printf("Anda remaja\n");
	}
	else if(umur > 19 && umur <= 30) {
		printf("Anda masih dewasa muda");
	}
	else if(umur > 30 && umur <= 50) {
		printf("Anda sudah dewasa, yey!!!!\n");
	}
	else {
		printf("Anda sudah lansia!\n");
	}

	//format bentuk ternary
	//(kondisi) ? (command kalo kondisi benar) : (command kalo kondisi salah(else))
	(5 % 2 == 0) ? printf("ini genap\n") : printf("ini ganjil\n");
	int nilai;
	printf("Masukkan nilai anda: ");
	scanf("%d", &nilai);

	//ternary, if bentuk singkat
	(nilai > 90) ? printf("Grade Anda A\n") : ((nilai > 85) ?
		printf("Grade Anda A-\n") : ((nilai > 80) ?
		printf("Grade Anda B+\n") : printf("Grade Anda B-\n")));

	system("cls");
	int negara;
	printf("1. Indonesia\n");
	printf("2. Singapura\n");
	printf("3. Malaysia\n");
	printf("Pilih negara yang ingin Anda datang [1 - 5]: ");
	scanf("%d", &negara); fflush(stdin);
	switch(negara) {
		case 1: printf("Anda memilih Indonesia\n"); break;
		case 2: printf("Anda memilih Singapura\n"); break;
		case 3: printf("Anda memilih Malaysia\n"); break;
		//dst
	}

	char testing; //text 1 huruf saja, contohnya 'k'
	scanf("%c", &testing); fflush(stdin);
	switch(testing) {
		case 'A': printf("Wah nilai Anda Bagus");
	// case "haiiii" --> array of char, tidak bisa di switch
	}
	getchar(); // untuk menahan layar
	//untuk menerima input

	int nilaiAnak1[10]; //deklarasi
	//{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//inisialisasi
	//array dimulai dari 0
	nilaiAnak1[0] = 90;
	nilaiAnak1[1] = 85;

	//array of char 
	char contohArrOfChar[100];
	//{'a', 'k', 'u'}
	scanf("%s", contohArrOfChar); //
	scanf("%[^\n]", contohArrOfChar);

}
