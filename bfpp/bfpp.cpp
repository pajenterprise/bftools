#include <cstdio>
#include <cctype>

int main(){
  int b, c, i;
  b=1;
  while(1){
    c=getchar();
    if(EOF==c){
      return 0;
    }
    if(isdigit(c)){
      ungetc(c, stdin);
      scanf("%d", &b);
      continue;
    }
    for(i=0; i<b; i++){
      putchar(c);
    }
    b=1;
  }
  return 0;
}
