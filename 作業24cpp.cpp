#include <stdio.h>

#include <stdlib.h>

struct course

{

	char name[10];  

	int calculus;

	int computer;

	int programming;

} p;



int main(void)

{
	int m;
    FILE *pFile;


	printf("讀取內容為：\n");

	pFile=fopen("couse.txt", "r");

        

    if (pFile==NULL)

    {

        printf("檔案開啟失敗!!\n");

        exit(1);

	}   

    else

    {

	
		for(m=0;m<7;m++){
			fscanf(pFile,"%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming);
			printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 
		}    

	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
