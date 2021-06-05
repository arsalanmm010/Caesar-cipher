#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int key;
      if (argc == 2 && *argv[1])
      {
           char s[100];
          int i,j;
          int k;
          k = strlen(argv);

          for(i = 0; i < k; i++);
              if(isalpha(argv[i]))
              {
                  printf("Usage: \n");
                  return 1;
              }
              else{
            key = atoi(argv[1]);
             printf("%d\n",key);

             printf("plaintext: ");
             fgets(s, sizeof(s), stdin);

              }




               for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + key) % 26) + 'a'); // print out lowercase with key
            } // if it it between uppercase A and C
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + key) % 26) + 'A'); // print out uppercase with key
            }

            else

            {
                printf("%c", s[i]);
            }
        }

        printf("\n");
        return 0;
    }
      else{
        printf("Usage: caesar key: ");
        return 1;
      }

}
