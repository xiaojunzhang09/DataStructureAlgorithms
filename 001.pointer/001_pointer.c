#include <stdio.h>

void show_array(int * p,int len){
  p[0] = -1;
}

void array(){
  int a[6] = {0,1,2,3,4,5};
  printf("%p \n",a+1);
  printf("%p \n",a+2);
  printf("%d \n",*a+3);
  printf("%d \n",*(a+2));

  show_array(a,6);

  printf("%d \n",*a);

}

int main() {
  int i = 100;
  /**
   * 指针变量，存放内存单元地址
   */
  int *p = &i;
  int j = *p;

  printf("i = %d , j = %d ,*p = %d , &p = %p \n", i, j, *p, &p);

  array();
}