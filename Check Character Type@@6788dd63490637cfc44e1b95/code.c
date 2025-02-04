#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch;
    scanf("%c",&ch);
    int x = (int)ch;
    if(x>96 && x<123){
        if(x==97 || x==101 || x==105 || x==111 || x==117){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }
    else if(x>64 && x<91){
        if(x==65 || x==69 || x==73 || x==79 || x==85 ){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }
    else if(x>47 && x<58){
        printf("Digit");
    // }else if((x>30 && x <48) || ( x>57 && x<65) || (x>90 && x<97) || (x>122 && x<127) ){
    //     printf("Special Character");
    // }
    }else{
        printf("Special Character");
    }

    
    return 0;
}