#include<string.h>
#include<stdlib.h>

int add (const char* input)
{
    int stringlen = strlen(input);
  
    if( stringlen == 0)
      return 0;

    if (strcmp(input, "0") == 0)
      return 0;

    char *comma_pos = strchr(input, ",");
    if ( comma_pos != NULL)
    {
        int num1 = atoi(input);
        int num2 = atoi(comma_pos +1);

        return num1+num2;
=    }

    return -1;
}
