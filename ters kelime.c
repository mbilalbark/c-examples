#include <stdio.h>

int main() {
	
	char kelime[100];
	int i =0,c=0,sayac=0;
	int z;
	printf("En fazla 100 harflik anlamli bir kelime giriniz\n");
	scanf("%s",kelime);
	
   // Kullanicidan al�nan kelimenin harf say�s�n� bulma i�lemi	
   while (kelime[c] != '\0')
   {
      c++;
   }
   c--; 
   z=c;
   // kelimenin sondan ve ba�tan olarak b�t�n harfleri kontrol ediliyor ve sayac artt�r�l�yor
   // e�er sayac kelimenin harf say�s� ile ayn� ise kelime tersten de ayn�d�r.
   for (i=0;i<c;i++)
   {
   	  if(kelime[z] == kelime[i])
   	    sayac++;
	   z--;
   }
    
    if(sayac==c)
     printf("Kelime Polindrome dur.");
    else 
     printf("Kelime Polindrome degildir.");
   
	return 0;
}
