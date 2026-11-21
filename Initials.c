#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Xavier's School of Engineering and Technology";
    char fill[6][10] = {"OF", "AND", "THE", "IN", "FOR"};
    int n = 6;

    char ans[50];
    char w[50];
    int k = 0;
    int m = 0;

    for (int i = 0; i <= strlen(str); i++) 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            w[m++] = toupper(str[i]);
        } 
        else if (m > 0) 
        {
            w[m] = '\0';

            int flag = 0;
            for (int j = 0; j < n; j++) 
            {
                if (strcmp(w, fill[j]) == 0) 
                {
                    flag = 1;
                    break;
                }
            }

            if (flag!=1 ) 
            {
                ans[k++] = w[0];
            }
            m = 0;
        }
    }

    ans[k] = '\0';

    printf("%s\n", ans);

    return 0;
}