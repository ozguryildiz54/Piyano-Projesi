#include<stdio.h>
#include <windows.h>
#include<Winbase.h>
int main()
 {
int islem;
char secim;
char e,h;
printf(" do notasi icin 1 \n do diyez notasi icin 2 \n re notasi icin 3 \n re diyez diyez notasi icin 4 \n mi notasi icin 5 \n fa notasi icin 6 \n fa diyez diyez notasi icin 7 \n sol diyez notasi icin 8 \n sol diyez notasi icin 9 \n la notasi icin 10 \n la diyez notasi icin 11 \n si notasi icin 12 \n tuslarina basiniz: \n \n");
printf("  kendi basiniza mi  \n yoksa ornek notalardan mi calismak istersiniz \n cevabiniz kendi basiniza ise e ornek notalardan ise h yaziniz:  \n\n");
scanf("%c",&secim);
if(secim==e)
{
	int a=0; for(;1;)
  {
  	printf("...");
        scanf("%c",&islem);
  switch (islem) 
      {

     case 1 : Beep(261,500); break;

     case 2 : Beep(277,500); break;

     case 3 : Beep(293,500); break;
     
     case 4 : Beep(311,500); break;
     
     case 5 : Beep(329,500); break;
     
     case 6 : Beep(349,500); break;
     
     case 7 : Beep(369,500); break;
     
     case 8 : Beep(392,500); break;
     
     case 9 : Beep(415,500); break;
     
     case 10 : Beep(440,500); break;
     
     case 11 : Beep(466,500); break;
     
     case 12 : Beep(493,500); break;
     
       }
   
  }
}
else 
{
printf("  istiklal marsi notalari: \n  DO -MÝ -FA - SOL-RE-FA-MÝ - MÝ -LA- SÝ- DO -SÝ -SOL-SÝ \n -SÝ -LA- SÝ - FA -FA- LA -SOL-RE- MÝ-FA-SOL-LA -SÝ -DO-RE \n");
printf("\nHekim Oglu Turkusu Melodika ve Hekim Oglu Turkusu Flut Notalari \n Mi – fa – fa – fa – fa – mi- mi- re- mi- re- do- re / \n do mi re mi do re si do -sol- do- do- do- do- re -do- re- mi- do / \n mi- fa- sol- sol- sol- sol- la- fa- sol- mi- fa- sol Mi – fa- fa- fa -fa- mi- mi- re- mi- re- do- re / \n do mi re mi do re si do");
	int a=0; for(;1;)
  {
  	printf("...");
        scanf("%d",&islem);
  switch (islem) 
      {

     case 1 : Beep(261,1000); break;

     case 2 : Beep(277,1000); break;

     case 3 : Beep(293,1000); break;
     
     case 4 : Beep(311,1000); break;
     
     case 5 : Beep(329,1000); break;
     
     case 6 : Beep(349,1000); break;
     
     case 7 : Beep(369,1000); break;
     
     case 8 : Beep(392,1000); break;
     
     case 9 : Beep(415,1000); break;
     
     case 10 : Beep(440,1000); break;
     
     case 11 : Beep(466,1000); break;
     
     case 12 : Beep(493,1000); break;
     
       }
    
  }

}
	
}

 

