#include <stdio.h>

int main() {
	
	char kelime[100];
	int c=0;
	int kalinSesli=0,inceSesli=0;
	
	printf("Bir kelime giriniz\n");
	scanf("%s",kelime);
	
	while (kelime[c]!='\0')
	{
		if(kelime[c]=='a'||kelime[c]=='o'||kelime[c]=='u'||kelime[c]=='ý')
			kalinSesli+=1;
	    if(kelime[c]=='e'||kelime[c]=='i'||kelime[c]=='ü'||kelime[c]=='ö')
	        inceSesli+=1;
	        
	  c++;    
	}
	// burda ikisinden biri 0 ise yani biri hiç artmamýþ bu yüzden kalin veya ince ünlü ile devam etmiþtir bu yüzden doðrudur. 
	// ama ikiside 0 deðilse else düþer yani kelimemin içinde hem ince ünlü var hemde ünsüz var 
	if(kalinSesli==0||inceSesli==0){
      printf("%s Kelimesi Buyuk Sesli Uyumuna Uyar.\n",kelime);
   }
   else{
      printf("%s Kelimesi Buyuk Sesli Uyumuna Uymaz.\n",kelime);
   } 
	return 0;
}
