#include <stdio.h>

int topla(int id1, int id2); //int ile belirterek 3 tane değişken atar
int kare_al(int id);

int main(void)
{
  int id; //değişkenin içini belirler

  id = 21;

  printf("%d sayısı ile karesinin toplamı: %d", id, topla(id, kare_al(id))); //geri gönderilen değerleri değişken olarak kullanır

  return 0;
} //void satırı kapanır

int topla(int id1, int id2) //değişkenler için işlem yapılır
{
  return id1+id2; //değeri istendiği yere geri gönderir
}

int kare_al(int id)
{
  return id*id;
}

/* #include <stdio.h>

void fonksiyon(int x);
int main(){
  //toplama
  fonksiyon(1);
  //çıkarma
  fonksiyon(2);
  //çarpma
  fonksiyon(3);
  //bölme
  fonksiyon(4);
}
 
void fonksiyon(int x){
  switch(x){
  case 1:
  printf("\n%d",3+6);
  break;
  case 2:
  printf("\n%d",3-6);
  break;
  case 3:
  printf("\n%d",3*6);
  break;
  case 4:
  printf("\n%d",12/6);
  break;
}
}
*/