#include <stdio.h>

//Strlen
int strngLen(char str[] ) {
  char *cp = str;
  int ret = 0;

  while(*cp != '0') { 
    ret++;
    cp++;
  }
  return ret;
}

//StrNCopy
char * strngCopyVar(char *des, char *src, int n) {
  while(*src && n) {
    *des = *src;
    des++;
    src++; 
    n--;
  }
  return des;
}

//StrCat
char * strngCat(char *des, char *str) {
  char *s = des;
  while (*des != 0){
    des++;
  }
  while (*str != 0){
    *des = *str;
    des++;
    str++;
  }
  return s;
}

//StrCmp
int strngComp(char *s, char *s1) {
  while (*s || *s1) {
    if (*s < *s1) {
      return -1;
    }
    else if (*s > *s1) {
      return 1;
    }
    s++; 
    s1++;
  }
  return 0;
}

//StrChr
char * strngChar(char *str, char chr) {  
  while(*str) {
    if (*str == chr) {
      return str;
    }
    *str++;
  }
  return NULL;
}

//TESTS
int main() {
  char str[50] = "The length of this string is 310";
  printf("String: %s\n", str);
  printf("Length: %d\n\n", strngLen(str) );

  char str1[10] = "";
  printf("Str1: %s\n", str);
  printf("Str2: %s\n", str1);
  printf("Copy 6 chars from str1 to str2: %s\n", strngCopyVar(str1, str, 6));
  printf("Str1: %s\n", str);
  printf("Str2: %s\n\n", str1);

  printf("Str2: %s\n", str1);
  printf("Cating \"ggo\" to str2: %s\n", strngCat(str1, "ggo"));
  printf("New Str2: %s\n\n", str1);

  printf("\"cat\" vs \"dog\": %d\n", strngComp("cat", "dog"));
  printf("\"dog\" vs \"cat\": %d\n", strngComp("dog", "cat"));
  printf("\"cat\" vs \"cat\": %d\n\n", strngComp("cat", "cat"));

  printf("Finding \"o\" in str1: %s\n", strngChar(str, 'o')); 
  printf("Finding \"j\" in str1: %s\n\n", strngChar(str, 'j')); 
}
