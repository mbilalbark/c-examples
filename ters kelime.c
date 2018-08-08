#include <stdio.h>

int main() {
	
	char kelime[100];
	int i =0,c=0,sayac=0;
	int z;
	printf("En fazla 100 harflik anlamli bir kelime giriniz\n");
	scanf("%s",kelime);
	
   // Kullanicidan alýnan kelimenin harf sayýsýný bulma iþlemi	
   while (kelime[c] != '\0')
   {
      c++;
   }
   c--; 
   z=c;
   // kelimenin sondan ve baþtan olarak bütün harfleri kontrol ediliyor ve sayac arttýrýlýyor
   // eðer sayac kelimenin harf sayýsý ile ayný ise kelime tersten de aynýdýr.
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
