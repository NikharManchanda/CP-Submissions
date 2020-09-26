#include <stdio.h>
#include <string.h>
 
int main(void){
  char s[12];
  scanf("%s", s);
  
  int flag=0;
  
  if(s[0]=='A') flag++;
  int l = strlen(s);
  int c=0;
  for(int i=2;i<=(l-2);i++){
    if(s[i]=='C') c++;
  }
  if(c==1) flag++;
  int d=0;
  for(int i=1;i<=l;i++){
    if(s[i]>='a' && s[i]<='z') d++;
  }
  if(d==l-2) flag++;
  if(flag==3) printf("AC\n");
  else printf("WA\n");
  return 0;
 
}