#include <stdio.h>

int main() {
	
	char kelime[100];
	int c=0;
	int kalinSesli=0,inceSesli=0;
	
	printf("Bir kelime giriniz\n");
	scanf("%s",kelime);
	
	while (kelime[c]!='\0')
	{
		if(kelime[c]=='a'||kelime[c]=='o'||kelime[c]=='u'||kelime[c]=='�')
			kalinSesli+=1;
	    if(kelime[c]=='e'||kelime[c]=='i'||kelime[c]=='�'||kelime[c]=='�')
	        inceSesli+=1;
	        
	  c++;    
	}
	// burda ikisinden biri 0 ise yani biri hi� artmam�� bu y�zden kalin veya ince �nl� ile devam etmi�tir bu y�zden do�rudur. 
	// ama ikiside 0 de�ilse else d��er yani kelimemin i�inde hem ince �nl� var hemde �ns�z var 
	if(kalinSesli==0||inceSesli==0){
      printf("%s Kelimesi Buyuk Sesli Uyumuna Uyar.\n",kelime);
   }
   else{
      printf("%s Kelimesi Buyuk Sesli Uyumuna Uymaz.\n",kelime);
   } 
	return 0;
}
