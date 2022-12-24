#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* toUpperString(char* arr) {
    int i = 0;
    while (arr[i] != '\0') {
        arr[i] = toupper(arr[i]);
        i++;
    }
    return arr;
}

void main()
{
    // 1
    //char name[41], newName[41] = "Hello, ", stroke[40] = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    //printf("Enter your name: ");
    //scanf("%s", name);
    //strcat(newName, name);
    //printf("%s!", newName);

    //// 1.2
    //printf("\n\n\n%s!", toUpperString(newName));

    //// 1.3
    //strncat(newName, stroke, 40-strlen(newName));
    //printf("\n\n\n%s! - %d", newName, strlen(newName));

    //// 2
    //char ch[2] = { name[strlen(name) - 1] };
    //strncat(name, ch, 40 - strlen(name));
    //printf("\n\n\n%s!", name);

    // 3
    char str[100];
    char lastCh = ' ';
    int flag = 0;
    int wordsWithLastSymbol = 0;
    printf("\n\n\nEnter a stroke: ");
    fgets(str, 100, stdin);
    printf("\n\n\n%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i + 1] == ' ' && str[i] != ' ' && !flag) {
            lastCh = str[i];
            flag = 1;
        }
    }
    printf("\n%c - Last symbol", lastCh);
    if (str[0] == lastCh) {
        wordsWithLastSymbol++;
    }
    for (int i = 1; i < strlen(str); i++) {
        if (str[i - 1] == ' ' && str[i] == lastCh) {
            wordsWithLastSymbol++;
        }
    }
    printf("\n%d - Words with last symbol", wordsWithLastSymbol);
}