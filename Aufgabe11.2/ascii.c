// Bocher Diedrich Sandmeier

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for UCHAR_MAX
#include <string.h> // for strcpy()

char* format_char(int index)
{
    char *formatted_char = malloc(6 * sizeof(char)); // allocate memory to the pointer
    char special_letter[3];
    switch (index)
    {
        // special cases, overwrite the output number
        case 7:
            strcpy(special_letter, "a");
            break;
        case 8:
            strcpy(special_letter, "b");
            break;
        case 9:
            strcpy(special_letter,  "t");
            break;
        case 10:
            strcpy(special_letter,  "n");
            break;
        case 11:
            strcpy(special_letter,  "v");
            break;
        case 12:
            strcpy(special_letter,  "f");
            break;
        case 13:
            strcpy(special_letter,  "r");
            break;
        default:
            sprintf(special_letter, "%i", index);
            break;
    }
    if (index >= 33 && index <= 126)
        sprintf(formatted_char, "%c", index);
    else // concatenate the backspace and the number/letter
        sprintf(formatted_char, "%s%s", "\\", special_letter);

    return formatted_char;
}

int main()
{
    int i = 0;

    while (i <= UCHAR_MAX / 4)
    {
        int line_entry;
        for (line_entry = 0; line_entry < 4; line_entry++)
        {
            int index_no = i + line_entry * 64;
            char* symbol = format_char(index_no); // get the symbol for the index
            printf("%3i %4s", index_no, symbol);
            free(symbol); // empty the memory again

            if (line_entry < 3) printf("             "); // add whitespaces for formatting
        }
        printf("\n");

        i++;
    }
  
    return (EXIT_SUCCESS);
}