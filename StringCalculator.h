#include<string.h>
#include<stdlib.h>

int Checkforempty (const char *input)
{
    int stringlen = strlen(input);
    
    if( stringlen == 0)
      return 0;  
}

int CompareforZero (const char *input)
{
    if (strcmp(input, "0") == 0)
      return 0;
}

int SumofTwoNumbers (const char *input)
{
    const char *comma_pos = strchr(input, ',');
    if ( comma_pos != NULL)
    {
        int num1 = atoi(input);
        int num2 = atoi(comma_pos +1);

        return num1+num2;
    }
}

int add (const char* input)
{
    Checkforempty(input);
    CompareforZero(input);
    SumofTwoNumbers(input);
    
    return -1;
}
