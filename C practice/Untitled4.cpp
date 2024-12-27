#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	//---------switch case---------------------
	
		int x;
		printf("welcom to the maane.\n 1-Nazig.\n 2-Support.\n 3-Shimoor.\n");
		scanf("%d",&x);	
switch(x){
	case 1:
		printf("Nazig");
		break;
	case 2:
		printf("support");
		break;
	case 3:
		printf("shimoor");
		break;
	default:	
		printf("ERROR");	
}	
//	----------------switch case targil 1-----------------------*/
	
	int a;
		printf("welcom to the Mavoh! \n press 1- yamina.\n press 2- smola.\n press 3- yashar\n");
	scanf("%d",&a);
switch(a){
	case 1:
		printf("kol hakavod tamshih\n");
	break;
	case 2:
		printf("you are dead ya luser");
	return 0;
	break;	
	
	case 3:
		printf("kol hakavod tamshih\n");
	break;	
	default:
		printf("ERROR!");
	return 0;	
}	
		printf("press 1- yamina.\n press 2- smola.\n press 3- yashar\n");
	scanf("%d",&a);
switch(a){
	case 1:
		printf("til ahi nitzahta!");
	break;
	case 2:
		printf("you are dead ya luser");
	return 0;
	break;
	case 3:
		printf("you are dead ya luser");
	return 0;
	break;	
	default:
		printf("ERROR!");
	return 0;			
}	
		
//	----------------lulaot targil 1-----------------------
	
	int num=5;
	int sum=0;
for(int i=1; i<=num; i++){
	sum=sum+i;
}	
	printf("%d", sum);
	
//	----------------lulaot mekunenet 1-----------------------
for(int i=0; i<5; i++){

	for(int j=0; j<5; j++){
			printf("* ");
}
			printf("\n");	
}
//	----------------lulaot mekunenet 2-----------------------
 	for(int i=5; i>0; i--){
		for(int j=0; j<i; j++){
		printf("*");
	}
		printf("\n");
		
	}
//	----------------lulaot mekunenet 3-----------------------	
	for(int i=0; i<5; i++){

	for(int j=5; j>i; j--)
		printf(" ");
		
	for(int c=0; c<=i; c++)
	   	printf("*");
		printf("\n");
}
//	----------------lulaot mekunenet 4-----------------------

  	for(int i=0; i<5; i++){
  		
	   for(int j=0; j<=i; j++)
			printf(" ");
		
		for(int c=5; c>i; c--)
		 	printf("*");
		 
		    printf("\n");
		
	}
//	----------------arrey-----------------------
	
	int arr[5];
	arr[0]=1;
    arr[1]=2;
    arr[2]=6;
    arr[3]=0;
    arr[4]=9;
    for(int i=0; i<5; i++){
    	printf("%d\n",arr[i]);
	}
//	----------------arrey targil 1-----------------------
	
	int i;
	char ch[20]="my name is";
for(i=0;ch[i]!='\0';i++)
	if(ch[i]>=97 && ch[i]<=122)	
	ch[i]-=32;
	ch[i]='!';
	ch[i+1]='\0';
	printf("%s", ch);
	
//	----------------arrey targil 2-----------------------	
	int i;
	int chCount=0;
	char ch[20]="my name is";
for(i=0; ch[i]!='\0'; i++)
if(i==0 || ch[i-1]==' ')
if(ch[i]>=97 && ch[i]<=122){
	ch[i]-=32;
	chCount++;
}
	printf("%s\n", ch);
	printf("%d", chCount);
//	----------------arrey targil 3-----------------------	
   	int i;
   	char name[20]="ariel";
   	char lastName[20]="bengayev";
   	char city[20]="qiryat gat";
   	int count1=0, count2=0, count3=0;
   	
  	for(i=0; name[i]!='\0'; i++)
   	count1++;
  	for(i=0; lastName[i]!='\0'; i++)
   	count2++;
   for(i=0; city[i]!='\0'; i++)
   	count3++;
   	
	if(count1>count2 && count1>count3)
		printf("%s is the big one\n", name);
		
	if(count2>count3)	
		printf("%s is the big one\n", lastName);	
		
	else	
		printf("%s is the big one\n", city);
//	----------------arrey targil 4-----------------------
		 	
   	char phoneNumber[50];
   	gets(phoneNumber);
   	int flag=1;
   if(strlen(phoneNumber)!=10 || phoneNumber[0]!='0')
   	flag=0;
   for(int i=0; i<strlen(phoneNumber)&&flag==1; i++){
   if(isdigit(phoneNumber[i])==0)
		flag=0;	
	}	
   if(flag!=1)	
   	printf("error");
   else
		printf("good");	
//	----------------arrey targil 5-----------------------
	
	char answer1[50];
	char answer2[50];
	char answer3[50];
			
		
}