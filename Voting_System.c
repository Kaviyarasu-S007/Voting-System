#include<stdio.h>
#define max 25
char add();

char add()
{

	char candid[max];
	char name[max];
	char party[max];
	int div,i,n;
	int count;
FILE *fptr;



fptr=fopen("addx.txt","a");

printf("\nno of candidataes to add:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

 printf("\n\nenter the canditate name ");
 scanf("%s",&name);
printf("\nparty name:");
scanf("%s",&party);
printf("\nenter the division you going to participate:");
scanf("%d",&div);
candid[0]=party[0];
candid[1]=party[1];
candid[2]=party[2];

printf("\ncandid id is %s0%d",candid,div);

fprintf(fptr,"\nName:%s  ,party name=%s  , division=%d  ,candidate id=%s0%d  ",name,party,div,candid,div );
}
	fclose(fptr);


}

int main()
{
    int choice;
    do{
        printf("\n\n1.Add candidate");
        printf("\n2.View candidate");
        printf("\n0.Exit");
        
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        
    if(choice==1)
    {
    	add();
	}
	else if(choice==2)
{
	FILE* ptr;
	char ch;
	ptr = fopen("addx.txt", "r");
	printf("\ncontent of this file are \n");
	do {
		ch = fgetc(ptr);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(ptr);
	
}



else
{
	return 0;
	
}
}while(choice!=0);
	return 0;
}