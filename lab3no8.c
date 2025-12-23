
#include <stdio.h>

int main(){
	int Hour,Minute,second,minput;
	scanf("%d:%d:%d",&Hour,&Minute,&second);
	printf("Next minutes: ");
	scanf("%d",&minput);
	Minute = Minute + minput;
	if (Minute >= 60){
		Hour = Hour + (Minute / 60);
		Minute = Minute % 60 ;
	}
	if (Hour >= 24){
		Hour = Hour%24;
	}
	printf("%d:%d:%d",Hour,Minute,second);
}


