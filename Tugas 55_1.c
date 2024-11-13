#include <stdio.h>

int main() 
{
  int jam_masuk, jam_keluar, lama_kerja;
  
  printf("masukkan Jam Masuk: ");
  scanf("%d", &jam_masuk);
  printf("masukkan Jam Keluar: ");
  scanf("%d", &jam_keluar);
  
  if (jam_keluar >= jam_masuk){
    lama_kerja = jam_keluar - jam_masuk;
  } else {
    lama_kerja = (jam_keluar + 12) - jam_masuk;
  }
  printf("Lama kerja %d jam\n", lama_kerja);
  return 0;
}