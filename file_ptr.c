#include<stdio.h>                                                              

void main()
{
	FILE *fp;
	char ch;
	int noc=0;
	fp=fopen("test.txt","r");
	printf("File content:\n");

	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
		noc++;
	}
	fclose(fp);
	printf("\nNumber of charcters in file:%d\n",noc);
}

/*
output:
------
File content:
Hello World

Number of charcters in file:12
*/
