#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int harga, tanggal, bulan,harga_cat=0, harga_cukur = 0, harga_member,diskon;
	char layanan[100], member[100], nama[100], cat_rambut[100];
	double harga_diskon, total;
	
	scanf("%[^\n]s", nama);getchar();
	scanf("%d",&tanggal); getchar();
	scanf("%[^\n]s", layanan);getchar();
	scanf("%s", cat_rambut);getchar();
	scanf("%s", member); getchar();
	

	if(strcmp(layanan,"Junior Cut")==0){
		harga_cukur = 50000;
	}else if(strcmp(layanan, "Senior Cut")==0){
		harga_cukur = 75000;
	}else if (strcmp(layanan, "Cepmek Cut")==0){
		harga_cukur = 100000;
	}
	
	if(strcmp(cat_rambut,"true")==0){
		harga_cat = 75000;
	}else{
		harga_cat = 0;
	}
	
	if(strcmp(member,"lama")==0){
		diskon = 40;
		harga_diskon = 0.4;
		harga_member = 0;
	}else if(strcmp(member,"baru")==0){
		diskon = 40;
		harga_diskon = 0.4;
		harga_member = 50000;
	}else if(strcmp(member,"non-member")==0){
		diskon = 0;
		harga_diskon = 0;
		harga_member = 0;
	}
	
	total = ((harga_cukur + harga_cat)*(1-harga_diskon)) + harga_member;
	
	
	
	printf("========================\n");
	printf("------------------------\n");
	printf("\tRawr Cuts\n");
	printf("========================\n");
	printf("%d Oktober 2022\n\n", tanggal + 1);
	printf("%s\n", nama);
	
	printf("%s     Rp.%d\n", layanan, harga_cukur);
	printf("Lainnya        Rp.%d\n",harga_cat);
	printf("------------------------\n");
	
	
	printf("Diskon              %d%%\n\n", diskon);
	printf("Member         Rp.%d\n",harga_member);
	printf("Total          Rp.%.0f\n",total);
		
	printf("========================\n");
	printf("   Terimakasih Banyak\n");
	printf("------------------------\n");
	printf("========================\n");
	return 0;
}
