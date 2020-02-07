#include<stdio.h>
#include "function.h"

void CCDataSplit(char InputString[], char Str, int output1[]){
	int i =0,j=0;
	while(InputString[i] != '\0'){
		if(InputString[i] == Str){
			j++;
		}else{
			//printf("%c ",InputString[i]);
			//printf("%d ",InputString[i]-'0');
			output1[j]=output1[j]*10+InputString[i]-'0';
		}
		i++;
	}
	for (i=0; i<=j;i++){
		printf("%d ",output1[i]);
	}
}

int main(){
	char* GreetingWord = "Hi Box";
	char str[10];
	char array[] = "81,01,24";
	int output[255];
	for(int i=0;i<255;i++){output[i]=0;}
	
	CCMemoryInit(str,'\0',sizeof(str));
	CCMemoryCopy(str,GreetingWord,sizeof(GreetingWord)+1);
	printf("%s\n",str);
	CCDataSplit(array,',',output);
	return 0;
}


// I want to see the git work!
