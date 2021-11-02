#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int uzunlikAniqla(char ism[]){
    int uzunlik = 0;
    for(int i = 0; ism[i] != '\0';++i){
        uzunlik +=1;
    }
    return uzunlik;
    }
    void togirla(char *soz){
        *(soz + 2) = 'c';
    }struct Oquvchi{
        char name[100];
        int id;
        double boy;
    }S1,S2;

int main()
{

    setlocale(LC_ALL,"Russian");
    int countName;
    printf("Nechta ism kerak: ");
    scanf("%d",&countName);
    while(countName > 10 || countName <=0){
        printf("Nechta ism kerak qaytadan kiriting: ");
        scanf("%d",&countName);
    }
    char names[countName][20];
    for(int i = 0; i< countName; ++i){
        printf("%d - ismni kiriting: ",i);
        scanf("%s",names[i]);
    }
    for(int i = 0; i< countName; ++i){
        printf("Ism: %s\n",names[i]);
    }
    int uzunlik;
    printf("Nechta son kiritmoqchisiz: ");
    scanf("%d",&uzunlik);
    double seriya[uzunlik],yigindi = 0,ortalama;
    for(int i = 0; i< uzunlik; i++){
        printf("%d sonni kiriting: ",i+1);
        scanf("%lf",&seriya[i]);
    }
    for(int i = 0; i < uzunlik; ++i){
        printf("%d - son -> %.2lf\n",i+1,seriya[i]);
        yigindi += seriya[i];
    }
    ortalama = yigindi / uzunlik;
    printf("Ortalama: %.2lf",ortalama);

    char name1[100] = "Hello";
    printf("%d\n",uzunlikAniqla(name1));
    printf("%d",strlen(name1));

    char modelNomi[100] = "Makbook";
    togirla(&modelNomi);
    printf("%s",modelNomi);


    char soz[100];
    printf("Iltimos soz kiriting: ");
    scanf("%s",soz);

    char *togriAdres,*teskariAdres;
    for(teskariAdres = soz;*teskariAdres != '\0';teskariAdres += 1);
    for(togriAdres = soz,teskariAdres -=1;teskariAdres >= togriAdres;){
        if(*teskariAdres == *togriAdres){
            teskariAdres -= 1;
            togriAdres += 1;
        }else{
            break;
        }
    }
    if(teskariAdres < togriAdres){
        printf("Soz Palindrom");
    }else{
        printf("Soz Palindrom Emas");
        }

    strcpy(S1.name,"Muhammadali");
    S1.id =22;
    S1.boy = 173;
    printf("Ism: %s. Id: %d. Boy: %.2lf\n",S1.name,S1.id,S1.boy);

    strcpy(S2.name,"Wick");
    S2.id = 25;
    S2.boy =155.4;
    printf("Ism: %s. Id: %d. Boy: %.2lf\n",S2.name,S2.id,S2.boy);

 // Strlen

char ism[19];
    printf("Iltimos Ismingizni kiriting: ");
    scanf("%s",ism);
    printf("Kiritilgan ismning uzunligi: %d\n",strlen(ism));
    if(strlen(ism) >= 7){
        printf("Parol qabul qilindi!");
    }else{
        printf("Parol qabul qilinmadi!");}

// Strcpy

    char nom[10] = "Hello";
    char qoshimcha[10];
    //strcpy(nom,qoshimcha);
    strncpy(nom,qoshimcha,3);
    printf("%s",qoshimcha);
    //strcat
    char user[40] = "";
    char name[30] = "Ism: ";
    char job[30] = " Kasb: ";
    char nameKirit[30];
    char jobKirit[30];

    printf("Iltimos ism va kasbingizni kiriting: ");
    scanf("%s%s",nameKirit,jobKirit);
    strcat(name,nameKirit);
    strcat(job,jobKirit);
    strcat(user,name);
    strcat(user,job);
    printf("%s",user);

    char ism1[20];
    char parol[20];
    char haqiqiyism[20] = "admin";
    char haqiqiyparol[20] = "password";
    printf("Iltimos username va passwordni kiriting: \n");
    scanf("%s%s",ism1,parol);
    if(strcmp(ism,haqiqiyism)==0 && strcmp(parol,haqiqiyparol)==0){
    printf("Xush kelibsiz!");
    }else{
    printf("Parol yoki username xato!");}
    return 0;
}
