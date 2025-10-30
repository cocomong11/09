#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
# define SIZE 5
int main(int argc, char *argv[]) {
	int i,average;
	int sum=0;
	int grade[SIZE];

	for(i=0;i<SIZE;i++){
	
	printf("학생성적을 입력하세요:");
	scanf("%d",&grade[i]);
	sum+=grade[i];
}
	average=sum/SIZE;
	printf("성적 평균:%d\n",average);
	return 0;
}
