// 12S23028 - Daniel Situmorang

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int n;

  scanf("%d", &n);
  
  float angka[n];
  int i;
  int  terbesar, terkecil;
  float ratarata;

  for (i = 0; i < n ; i++) {
    scanf("%f", &angka[i]);

    if (angka[i] < terkecil) {
      terkecil = angka[i];
    }
    if (angka[i] > terbesar){
      terbesar = angka[i];
    }
  }
  ratarata = (angka[0] + angka[1] + angka[2] + angka[3] + angka[4] + angka[5] + angka[6] + angka[7]) / 8;

  printf ("%d\n", terkecil);
  printf ("%d\n", terbesar);
  printf ("%.2f", ratarata);

  return 0;
}
