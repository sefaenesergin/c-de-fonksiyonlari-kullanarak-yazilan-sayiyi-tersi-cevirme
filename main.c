//Sefa Enes Ergin-sefaenesergin@gmail.com
//Fonksiyon kullanarak yazılan sayıyı tersine çevirme kodu.
#include<stdio.h>
/*fonksiyon kullanımlarında :
 1-fonksiyon adı
 2-parametre tipi
 3-parametre adı
 4-işlem satırı olmalıdır.
 */
void tersCevir ( int sayi )//geriye değer döndürmediği için void.
{
    while(sayi>0){
        printf("%d",sayi%10);
        sayi/=10;
    }
    printf("\n");
}
int main( void )
{
    int sayi;
    printf( "Ters çevirmek istediğiniz sayıyı giriniz ");
    scanf("%d",&sayi);
    tersCevir(sayi);/* sayi parametresini tersCevir fonksiyonuna argüman olarak gönderdik.*/
    return 0;
}
