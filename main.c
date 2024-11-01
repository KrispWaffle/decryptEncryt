#include <stdio.h>
#include <ctype.h>
#include <string.h>
void enc(char *plaintext, int shift){
    char newText[strlen(plaintext)];
    for(int i =0; i<=strlen(plaintext); ++i){
        if(isupper(plaintext[i])){
            newText[i] = ((plaintext[i] - 'A' + shift) % 26) + 'A';

        }else if(islower(plaintext[i])){
            newText[i]=((plaintext[i] - 'a' + shift) % 26) + 'a';
        }else{
            newText[i]= plaintext[i];
        }
    }
    printf("%s\n", newText);
}

void dec(char *encText, int shift){
    char decText[strlen(encText)];
    for(int i = 0; i<=strlen(encText);++i){
        if(isupper(encText[i])){
            decText[i] = ((encText[i] - 'A' - shift) % 26) + 'A';

        }else if(islower(encText[i])){
            decText[i]=((encText[i] - 'a' - shift) % 26) + 'a';
        }else{
            decText[i]= encText[i];
        }
    }
    printf("%s\n",decText);
}
int main(){
    char string[] = "Hello World";
    enc(string, 3);
    dec("Khoor Zruog!", 3);
}