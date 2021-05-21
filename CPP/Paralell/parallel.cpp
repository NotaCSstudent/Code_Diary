
#include <iostream>
int A[1000];
int B[1000];
int C[1000];
void test() {
#pragma loop(hint_parallel(0))
    for (int i=0; i<1000; ++i) {
        A[i] = A[i] + 1;
    }

    for (int i=1000; i<2000; ++i) {
        A[i] = A[i] + 1;
    }
}



void loop_test_2(int u) {
#pragma loop(hint_parallel(8))
   for (int i=0; i<u; ++i){
      A[i] = B[i] * C[i];
   }
}






void loop_test(int u)
 {
   for (int i=0; i<u; ++i){
      A[i] = B[i] * C[i];
}
 }




int main()
{
#pragma loop(no_vector)
for (int i = 0; i < 1000; ++i)
{
   A[i] = B[i] + C[i];
}

    test();
    
}