#include <stdio.h>
#include <stdlib.h>

void removeDups(char* inStr, int len)
{
int strLen = sizeof(inStr)/sizeof(char);
strLen = len;
short* count = (short*)calloc(strLen,sizeof(short));
char res[strLen];

int i=0, j=0;
for(i=0; i<strLen;i++)
{
if(count[inStr[i]]==1)
continue;
else
{
count[inStr[i]] = 1;
res[j++] = inStr[i];
}
}

printf("Given String: %s \n Processed String: %s", inStr, res);
}

int main(void) {
removeDups("banana", 10);
return EXIT_SUCCESS;
}
