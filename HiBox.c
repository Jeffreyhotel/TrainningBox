#include<stdio.h>
#include "function.h"

int main(){
	char* GreetingWord = "Hi Box";
	char str[10];
	CCMemoryInit(str,'\0',sizeof(str));
	CCMemoryCopy(str,GreetingWord,sizeof(GreetingWord)+1);
	printf("%s\n",str);
	return 0;
}


// I want to see the git work!
