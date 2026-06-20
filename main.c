#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Verifica daca un sir contine doar litere
int verif_caracter(char s[]){
    int i;
    for(i=0;i<strlen(s);i++)
        if(isalpha(s[i])==0)
            return 0;
    return 1;
}

//transforma un caracter in index(numar)
int transform_index(char c){
    if(c>='a' && c<='z')
        c=c-'a';
    if(c>='A' && c<='Z')
        c=c-'A'+26;
    return c;
}

//transforma un index intr-un caracter
int transform_caracter(int n){
    if(n<26)
        n='a'+n;
    else
        n='A'+(n-26);
    return n;
}

int main()
{
    char parola[14001],cheie[14001],rez[14001];
    int i,lp=0,lc=0,index_c=0,index_p=0;
    scanf("%s",cheie);
    scanf("%s",parola);
    rez[0]='\0';
    lp=strlen(parola);
    lc=strlen(cheie);
    if(verif_caracter(cheie)==0 || verif_caracter(parola)==0){
        printf("INVALID");
        printf("\n");
        return 0;
    }

    //Extinderea cheii pana la lungimea parolei
    for(i=0;i<lp;i++)
        cheie[i]=cheie[i%lc];
    cheie[lp]='\0';

    //Criptarea parolei
    for(i=0;i<lp;i++){
        index_p=transform_index(parola[i]);
        index_c=transform_index(cheie[i]);
        rez[i]=transform_caracter((index_c+index_p)%52);
    }
    rez[lp]='\0';
    printf("%s",rez);
    printf("\n");
    return 0;
}
