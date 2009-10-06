#include <cstdio>

int main(){
  int c;
  printf("#include <stdio.h>\nint main(){unsigned char b[30000]={0};unsigned char* ptr = b;");
 
  while(EOF!=(c=getchar())){
    switch(c){
    case '>': {
      printf("++ptr;");
    }
      break;
    case '<': {
      printf("--ptr;");
    }
      break;
    case '+': {
      printf("++*ptr;");
    }
      break;
    case '-': {
      printf("--*ptr;");
    }
      break;
    case '.': {
      printf("putchar(*ptr);");
    }
      break;
    case ',': {
      printf("*ptr=getchar();");
    }
      break;
    case '[': {
      printf("while (*ptr) {");
    }
      break;
    case ']': {
      printf("}");
    }
      break;
    default:
      break;
    }
  }

  printf("return 0;}\n");

  return 0;
}
