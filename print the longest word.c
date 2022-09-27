#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],w[100],lw[100];
    int j=0,l=0;
    printf("Enter a string:\n");
    gets(s);
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]!=' ' && s[i]!='\0')
            w[j++]=s[i];
        else
            {
                w[j]='\0';
                if(strlen(w)>l)
                {
                    strcpy(lw,w);
                    l=strlen(w);
                }
            j=0;
            }
    }
    printf("The longest word is:");
    puts(lw);
    return 0;
}
