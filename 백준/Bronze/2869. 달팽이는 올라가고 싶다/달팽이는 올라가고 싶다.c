#include <stdio.h>
#include <string.h>
result(int A, int B, int V);

int main() {
  
    int A,B,V;
    scanf("%d %d %d", &A,&B,&V);
    printf("%d", result(A,B,V));
   
    return 0;
}
 int result(int A, int B, int V) {

     int demainder = V - A;
     int needs = demainder / (A - B);
     needs++;
     if ((V - A) % (A - B) != 0)
         needs++;
     return needs;

}
