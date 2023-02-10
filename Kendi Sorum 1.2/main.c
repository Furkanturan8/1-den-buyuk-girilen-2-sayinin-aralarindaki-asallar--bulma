#include <stdio.h>
#include <stdlib.h>

int main()
{
 //1 den buyuk girilen 2 sayi arasindaki asallari bulduran program....

        int sayi1,sayi2,sayac;
            printf("1 den buyuk iki adet sayi giriniz :");
            scanf("%d%d" ,&sayi1,&sayi2);

            printf("-- %d ve %d sayilari arasindaki asal sayilar -- \n",sayi1,sayi2);


           if(sayi1<sayi2){
                for(int i=sayi1 ; i<=sayi2 ; i++){
                sayac=0;
                    for(int j=2 ; j<i ; j++){
                        if(i%j == 0){
                        sayac++;
                        }
                    }

                if(sayac == 0 && sayi1 != 0 && sayi1 != 1)
                    printf("%d\n" ,i);

                }

           }

            if(sayi1>sayi2){
                for(int i=sayi2 ; i<=sayi1 ; i++){
                sayac=0;
                    for(int j=2 ; j<i ; j++){
                        if(i%j == 0){
                        sayac++;
                        }
                    }

                if(sayac == 0 && sayi2 != 0 && sayi2!= 1)
                    printf("%d\n" ,i);

                }

           }

    return 0;
}
