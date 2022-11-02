#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
	int dd,mm,yy,total_berat, harga, total_harga, hari,total_hari, berat, hari_diambil, i = 0;
	char layanan[100],layanan_temp[100];
//	double berat;
	
	scanf("%d", &berat);
	scanf("%d/%d/%d",&dd,&mm,&yy);
	scanf(" %s",&layanan);
	
	total_berat = berat;
	
	hari = berat/4;
	
	if(hari%4 != 0){
		hari++;
	}
	


	for(int i = 0; layanan[i]; i++){
	  layanan[i] = tolower(layanan[i]);
	}
//	printf("%s\n", layanan);
	
	if(strcmp(layanan,"kirim")==0){
		total_harga = (hari*7500)+10*(hari*7500);
		printf("Lama hari proses laundry : %d\n",hari);
		printf("Tanggal selesai : %d-%d-%d (Diantarkan)\n",dd+hari,mm,yy);
		printf("Total harga yang harus dibayar : Rp %d\n",total_harga);		
	}else{
		total_harga = (hari*7500);
		printf("Lama hari proses laundry : %d\n",hari);
		printf("Tanggal selesai : %d-%d-%d (Diambil)\n",dd+hari,mm,yy);
		printf("Total harga yang harus dibayar : Rp %d\n",total_harga);
	}
	
	return 0;
}
