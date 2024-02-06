// 12S23028 - Daniel Situmorang

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int n;

  scanf("%d", &n);
  
  int angka[n];
  int i, terbesar, terkecil;

  for (i = 0; i < n ; i++) {
    scanf("%d", &angka[i]);

    if (angka[i] < terkecil) {
      terkecil = angka[i];
    }
    if (angka[i] > terbesar){
      terbesar = angka[i];
    }
  }

  printf ("%d\n", terkecil);
  printf ("%d\n", terbesar);

  return 0;
}
