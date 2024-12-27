#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
//------------------maarch du meimadi targil 2 letaken-----------------------------
int main(){
	int arr[4][4];
for(int i=0; i<4; i++)
	for(int j=0; j<4; j++)
		scanf("%d",&arr[i][j]);
	
	printf("enter a number: ");
	int num, count;
	scanf("%d", &num);
for(int i=0; i<4; i++)
	for(int j=0; j<4; j++){
		if(num==arr[i][j]){
		}

}
//------------------maarch du meimadi targil -----------------------------
int main(){
		int arr[3][3];	
for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
		scanf("%d",&arr[i][j]);
for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
		if(arr[i][j]%2 != 0)
			arr[i][j] = 2;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++)
		printf("%d | ", arr[i][j]);
		printf("\n");
}
	
	
}
//------------------maarch du meimadi targil -----------------------------
int main(){
		int arr[3][3];	
for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
		scanf("%d",&arr[i][j]);
		avg(arr);
}

void avg(int arr[][3]){
	int avg=0, maxAvg=0;
for(int i=0; i<3; i++){
		avg=0;
	for(int j=0; j<3; j++)
		avg+=arr[i][j];
		avg/=3;
	if(avg>maxAvg)
		maxAvg=avg;	
}
for(int i=0; i<3; i++){
		avg=0;
	for(int j=0; j<3; j++)
		avg+=arr[j][i];
		avg/=3;
	if(avg>maxAvg)
		maxAvg=avg;	
}
		printf("%d", &maxAvg);
}
//------------------maarch du meimadi targil LEHAMSHICH -----------------------------
int main(){
	char arr[3][3]= {'X','O','X',	
					 'O','X','X',
					 'X','O','X'};
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++)	
		printf("%c | ", arr[i][j]);
		printf("\n");				 
}
	if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2])||		 
	(arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2])||	
	(arr[2][0]==arr[2][1]&&arr[0][0]==arr[2][2])||	
	(arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0])||	
	(arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1])||	
	(arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2])	

				
}
//------------------ targil -----------------------------
int main(){
	int num1=12, num2=34, num3=45;
	targil2( &num1, , &num2, &num3);
}

void targil2(int *p1, int *p2, int *p3){
	if(*p1<*p2 && *p1<*p3)
	 *p1+=10;
	else if(*p2<*p3) 
	*p2+=10;
	else
	*p3+=10;
}
//------------------ targil -----------------------------
int main(){
	
}

void targil3(int *sum, int *count, int num){
	while(num>0){
		sum+=num%10;
		num/=10;
		count+=1;
	}
}
//------------------ targil -----------------------------
void q1(int h, int *mp, int *cp){
	*mp = h/30;
	*cp = 1300+*mp*300;

}

int main(){
	int h=0;
	int m;
	int c;
	scanf(" what the h? %d", &h);
	q1(h, &m, &c);
	printf("madaf= %d price= %d",m,c);
	printf();
}
//------------------ targil -----------------------------
int main(){
		int id[9];
		int mishkal[]={1,2,1,2,1,2,1,2};
		printf("enter your id: \n");
	for(int i=0; i<9; i++){
		scanf("%d", id[i]);
	}
		int idCheck[9];
	for(int i=0; i<8; i++){
			idCheck[i]=(id[i]*mishkal[i]);
		if(idCheck[i]>9){
			idCheck[i]=(idCheck[i]%10+(idCheck[i]/10));
		}
	}
	
		int sum=0;
	for(int i=0; i<8; i++){
			sum+= idCheck[i];
	}
			sum+=id[8];
		if(sum%10==0)
			printf("true");
		else
			printf("false");
}
//------------------ targil  math-----------------------------
int main(){
	
	int number=153;
	int number2=number;
	int count=0;
	int result=0;
	
while(number!=0){
	count++;
	number=number/10;
	}
	if(count != 3)
		printf("error");
	else
		result=pow(number2%10,3)+pow(number2/10%10,3)+pow(number2/100,3);
		printf("%d", result);	
}
//------------------ targil math-----------------------------
int main(){
	
	int nosim=351;
	int moshvim=50;
	int buss=(nosim/moshvim+(nosim%moshvim != 0));
	printf("%d", buss);
}
//------------------ targil math letaken-----------------------------
int main(){
	int num=12;
	int haluka=0;
while(num>0){
		haluka=num/2;	
	if(num%haluka==0)
		printf("0");
	else
		printf("1");
	num=num/2;		
}
//------------------ targil hakzaa dinamit-----------------------------
int main(){

	int size;
	int *arr;
	printf("enter the size of the array: ");
	scanf("%d", &size);	
	arr=(int*)malloc(size*sizeof(int));	
	
	if(!arr){
		printf("ERROR");
		return 0;
	}
	
	else{	
		for(int i=0; i<size; i++){
			scanf("%d", *(arr+i));
		}
		for(int i=0; i<size; i++){
			printf("%d", *(arr+i));
		}
			free(arr);
	}
}
	//------------------ targil hakzaa dinamit-----------------------------	
	int size=4;
	int count=0;
	int arr1[]={1,2,3,1};
	int *arr2;
	int index=0;
	
	for(int i=0; i<size; i++){
		if(arr1[i]%2!=0)
			count++;
	}
	arr2=(int*)malloc(count*sizeof(int));
	
		if(!arr2){
		printf("ERROR");
			return (NULL);
		}
		
		else{
			for(int i=0; i<size; i++){
				if(*(arr1+i)%2!=0){
					*(arr2+index)=*(arr1+i);
					index++;
				}
			}
			for(int i=0; i<count; i++)
				printf("%d", arr2[i]);
			free(arr2);		
		}
}
	//------------------ targil struct-----------------------------	
	struct grades
	{
		int math, bio, english;
	}typedef grades;
	
	int main(){
	
	grades g1 = {100,50,76};
	printf("your grades is: %d, %d, %d",g1.math, g1.bio, g1.english);
}
	//------------------ targil struct-----------------------------	
	struct car
	{
		char carName[20];
		int nefahManoa[3];
		int year;
	}typedef car;
	
	int main(){
	
	car c1 = {"toyota",{1000,2000,3000},2008};
	printf("car name: %s\n",c1.carName);
	printf("sugey nefah: ");
		for(int i=0; i<3; i++)
			printf("%d, ",c1.nefahManoa[i]);
	printf("\n car year: %d",c1.year);			
}
	//------------------ targil struct letaken-----------------------------

	struct grade
	{
		char course[10];
		int hours;
		float avg;
	}typedef grade;
	
	grade kelet(){
		grade class1;
		printf("enter a course name:\n");
		scanf("%s\n",class1.course);
		
		printf("how many hours:\n");
		scanf("%d\n", &class1.hours);
		
		printf("enter a course avg:\n");
		scanf("%f:\n", &class1.avg);
		
		return(class1);
	}
	
	void pelet(grade class1){
		printf("%s\n%d\n%2f",class1.course,class1.hours,class1.avg);
	}
	
	int main(){
   grade class1, class2, class3 ;
   class1=kelet();
   printf("\nclass1 :\n");
   pelet(class1);			
}
	//------------------ targil reshumot mekusharot-----------------------------
		struct list
	{
		int num;
		struct list *next;
	}typedef list, *plist;
	
int main(){
	int exist=6;
	int newListCount=0;
	plist first=NULL;
	plist pnew;
	int num2;
	scanf("%d", &num2);
		while(num2){
			pnew=(plist)malloc(sizeof(list));
			pnew->num=num2;
			pnew->next=first;
			first=pnew;
			newListCount++;
			scanf("%d", &num2);
		}
		printf("%d new list\n", newListCount);
			for(int i=0; i<newListCount; i++){	
				printf("%d\t", first->num);
				if(first->num == exist)		
				first=first->next;
			}
				printf("\n");
			for(int i=0; i<newListCount; i++){	
				if(first->num == exist)
					printf("%d", first);	
			first=first->next;	
			}
}
