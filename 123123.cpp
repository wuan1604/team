#include <stdio.h>
#include<string.h>

int main(){
//aaaaa
	FILE *file;
	file = fopen("text.txt","r");
	char name[50];
	//int age;
	if(file == NULL){
		printf("File khong ton tai");
	}else{
		printf("Mo file thanh cong\n");
		/*fflush(file);
		printf("\nNhap vao du lieu:");
		gets(name);
		printf("Nhap vao so tuoi:");
		scanf("%d",&age);
		fprintf(file,"Name = %s, Age = %d",name,age);*/
	    while(!feof(file)){
		    fscanf(file,"%s",&name);
			printf("%s",name);
		}
		printf("\nNhap file thanh cong");
		fclose(file);
	}
}
