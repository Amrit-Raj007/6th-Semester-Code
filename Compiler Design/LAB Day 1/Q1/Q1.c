#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char ch;
    int wrd=1,charctr=1,line=1;
    fptr=fopen("test.txt","r");
    if(fptr==NULL)
     {
         printf(" File does not exist");
      }
    else
        {
          ch=fgetc(fptr);
          while(ch!=EOF)
            {
                if(ch==' ')
                    {
                        wrd++;
                    }
                    if(ch=='\n')
                    {
                        line++;
                    }
                    else
                    {
                        charctr++;
                    }
                ch=fgetc(fptr);
            }
        printf("The number of words in the  file is : %d\n",wrd-2);
        printf(" The number of characters in the  file is : %d\n",charctr-1);
        printf("The number of line in the given file is : %d\n\n",line);
        }
    fclose(fptr);
}
