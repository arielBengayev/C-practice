#include<stdio.h>
#include<string.h>
#include<ctype.h>

//------------------funkziot targil 1-----------------------------
int findMax(int a, int b){
if(a>b)
	return a;
	return b;
}



int main(){
	int a, b, max;
	printf("enter 2 numbers: \n");
	scanf("%d %d", &a, &b);
	max=findMax(a,b);
	printf("max is: %d", max);
}

//------------------funkziot targil 2-----------------------------

int checkNum(int num){
	
if(num>=100 && num<=999)
	return 1;
if(num<=-100 && num>=-999)
	return 2;
	return 3;			

}

int main(){

int res, num;
scanf("%d", &num);
res= checkNum(num);
switch(res){
	case 1: printf("hiuvi");
	break;
	case 2:	printf("shlili");
	break;
	case 3: printf("lo tlat");
}
}

//------------------funkziot targil 3-----------------------------

int checkPssword(char password[]){
	int bigFlag=0;
	int smallFlag=0;
	int numFlag=0;
for(int i=0; i<strlen(password); i++)	
if(password[i]>='A' && password[i]<='Z')
			
}




int main(){
int flag;	
char password[10];
gets(password);
flag=checkPssword(char password[]);
printf("%d", flag);
}

//------------------maarch du meimadi targil 2-----------------------------
int main(){
	int arr[4][4];
	for(int i=0; i<4; i++){
	for(int j=0; j<4; i++){
	printf("%d", arr[i][j]);
		}
	}
}
