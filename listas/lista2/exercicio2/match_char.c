#include "../stack.h"

int parser(char* string){

    printf("size: %d \n", sizeof(string));

    // for(int i = 0; i<size; i++){
    //     if(string[i] !=' '&& string[i]!= '\0')  
    //         printf("%c\n",string[i]);
    // }

    return -1;
}

int main(){
    char string[]="( ( ) [ ( ) ] )";
    int size = sizeof(string);

    // printf("%s\n", string);
    // printf("%d\n", sizeof(string));

    int response = parser(string);
    
    return 0;
}