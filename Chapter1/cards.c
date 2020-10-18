/*
* Program to  evaluate face values of Black Jack.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char card_name[2]; 
    int count = 0;
    do
    {
        puts("Enter the card_name");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            continue; // go to while loop condition check
        default:
            val = atoi(card_name);
            if ( val < 1 || val > 10 ){
                puts("Error card value");
                continue; // go to while loop condition check
            }
            break;
        }

        if ( val > 2 && val < 7 ){
            count++;
        }
        else if ( val == 10 ) {
            count--;
        }
        printf("Current count: %i\n", count);

    } while (card_name[0] != 'X');

    return 0;
}