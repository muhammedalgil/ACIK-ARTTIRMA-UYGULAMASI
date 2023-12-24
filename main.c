#include <stdio.h>
#include <stdlib.h>
struct acikartirim
{
 char isim1[20];
 char isim2[20];
 char isim3[20];
 char isim4[20];
 char isim5[20];
 int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
};
struct acikartirim art;

typedef int acikartirimislem;



int main()
{
printf("\t\t\t\t\t --ACIK ARTIRMA OYUNUNA HOS GELDINIZ--\n\n");
printf("\t\t**OYUN KURALLARI**\n\n");
printf("- OYUN 5 KISI ARASINDA GERCEKLESECEK\n");
printf("- BASLANGIC FIYATLARI BELIRTILEN SEKILDE OLACAK\n");
printf("- VERILEN FIYATLAR 100 UN KATLARI SEKLINDE OLACAK\n");
printf("- ACIK ARTIRMA SURESI BOYUNCA CEKILEN OLDUGUNDA OYUN BITECEK VE KAZANAN BELIRLENECEK");

printf("\n\n");



acikartirimislem   islemler,j,i,h;
acikartirimislem   sayac=0,urunfiyat1=100,urunfiyat2=200,urunfiyat3=300;



bas:
printf("1.KATILIMCININ ISMI : ");
scanf("%s",&art.isim1);
printf("2.KATILIMCININ ISMI : ");
scanf("%s",&art.isim2);
printf("3.KATILIMCININ ISMI : ");
scanf("%s",&art.isim3);
printf("4.KATILIMCININ ISMI : ");
scanf("%s",&art.isim4);
printf("5.KATILIMCININ ISMI : ");
scanf("%s",&art.isim5);
printf("\n\n");
printf("1) **ANTIK YUNAN HEYKELI**  (ACILIS FIYATI 100 TL ) \n|\n");
printf("2) **MS 200.YUZYIL YAZITI** (ACILIS FIYATI 200 TL )\n|\n");
printf("3) **ESKI TABUT**          (ACILIS FIYATI 300 TL )\n\n\n");
printf("ACIK ARTIRIMA GIRECEGINIZ  URUNU SECINIZ : ");
scanf("%d",&islemler);
printf("\n\n");

 switch(islemler)
 {
 case 1 :
          for(j=art.s1;j<=art.s2;j++)
        {
          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim1);
          scanf("%d",&art.s1);
          printf("\n");
            if(art.s1>urunfiyat1)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE ' URUNU ALDINIZ..\n",art.isim1,art.s1);

              goto bas;
          }

          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim2);
          scanf("%d",&art.s2);
           printf("\n");
          urunfiyat1+=400;
         if(art.s2>urunfiyat1)
          {
            printf("\t\tTEBRIKLER %s '%d TL'YE'  URUNU ALDINIZ..\n",art.isim2,art.s2);
             goto bas;
          }
                    printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim3);
          scanf("%d",&art.s7);
           printf("\n");


               if(art.s7>urunfiyat1)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim3,art.s7);
              goto bas;
          }
          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim4);
          scanf("%d",&art.s8);
           printf("\n");

       if(art.s8>urunfiyat1)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim4,art.s8);
              goto bas;
          }

         printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim5);
          scanf("%d",&art.s9);
           printf("\n");

       if(art.s9>urunfiyat1)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim5,art.s9);
              goto bas;
          }


           }
break;
 case 2:
          for(i=art.s3;j<=art.s4;i++)
        {
          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim1);
          scanf("%d",&art.s3);
           printf("\n");
            if(art.s3>urunfiyat2)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' ALDINIZ..\n",art.isim1,art.s3,art.isim2);
              goto bas;
          }

          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim2);
          scanf("%d",&art.s4);
           printf("\n");
          urunfiyat2+=500;
         if(art.s4>urunfiyat2)
          {
            printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim2,art.s4);

            goto bas;
          }
                    printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim3);
          scanf("%d",&art.s7);
           printf("\n");


               if(art.s7>urunfiyat2)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim3,art.s7);
              goto bas;
          }
          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim4);
          scanf("%d",&art.s8);
           printf("\n");

       if(art.s8>urunfiyat2)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim4,art.s8);
              goto bas;
          }

         printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim5);
          scanf("%d",&art.s9);
           printf("\n");

       if(art.s9>urunfiyat2)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim5,art.s9);
              goto bas;
          }

          }
     break;

 case 3:
     for(h=art.s5;h<=art.s6;h++)
        {
          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim1);
          scanf("%d",&art.s5);
           printf("\n");
            if(art.s5>urunfiyat3)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim1,art.s5);

              goto bas;
          }

          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim2);
          scanf("%d",&art.s6);
           printf("\n");
          urunfiyat3+=600;
         if(art.s6>urunfiyat3)
          {
            printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim2,art.s6);
            goto bas;
          }

          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim3);
          scanf("%d",&art.s7);
           printf("\n");


               if(art.s7>urunfiyat3)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim3,art.s7);
              goto bas;
          }
          printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim4);
          scanf("%d",&art.s8);
           printf("\n");

       if(art.s8>urunfiyat3)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim4,art.s8);
              goto bas;
          }

         printf("SAYIN %s LUTFEN BIR FIYAT GIRINIZ : ",art.isim5);
          scanf("%d",&art.s9);
           printf("\n");
       if(art.s9>urunfiyat3)
          {
              printf("\t\tTEBRIKLER %s '%d TL'YE' URUNU ALDINIZ..\n",art.isim5,art.s9);
              goto bas;
          }
           }
    break;
    default:printf("\t!! YALNIS VEYA HATALI SECIM !!\n\n\n");
    goto bas;
 }




    return 0;
}


