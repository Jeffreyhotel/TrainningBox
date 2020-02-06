#include<stdio.h>

/** 
 * CC Memory Copy Function --
 * Notice : sizeof() +1 @ the string you key in exist '\0'
 * 	    So you have to plus 1 for memory locating.
***/ 
void CCMemoryCopy(char* ToFile,char *FromFile, int count){
	while(count >= 0){
		ToFile[count] = FromFile[count];
		count --;
	}
}

/**
 * CC Memory Initialize
 * Notice : Count must be correct or the core will dumped!
***/
void CCMemoryInit(char* InitFile, int Str, int count){
	while(count >= 0){
		InitFile[count] = Str;
		count --;
	}
}


