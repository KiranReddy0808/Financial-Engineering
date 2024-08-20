/* Predict what will be printed on the screen */
#include <stdio.h>
#define PRD(a) printf("%d", (a) )
#define NL          printf("\n");
// Create and initialse array
int a[]={0, 1, 2, 3, 4};
int main(){
     int i;
     int* p;

     /* 0 1 2 3 4 */
     for (i=0; i<=4; i++) PRD(a[i]);                  
     NL;

     /* 0 1 2 3 4 */
     for (p=&a[0]; p<=&a[4]; p++) PRD(*p);             
     NL;
     NL;
     /* 0 1 2 3 4 */
     for (p=&a[0], i=0; i<=4; i++) PRD(p[i]);          
     NL;

     /* 0 2 4 */
     for (p=a, i=0; p+i<=a+4; p++, i++) PRD(*(p+i)); 
     NL;
     NL;

     /* 4 3 2 1 0*/
     for (p=a+4; p>=a; p--) PRD(*p);                  
     NL;

    /* 4 3 2 1 0 */
     for (p=a+4, i=0; i<=4; i++) PRD(p[-i]);       
     NL;

    /* 4 3 2 1 0*/
     for (p=a+4; p>=a; p--) PRD(a[p-a]);    
     NL;
     return 0; 
}