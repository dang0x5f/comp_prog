#include <stdio.h>
#include <string.h>

int
max(int v1, int v2)
{
    if(v1 > v2)
        return(v1);
    else
        return(v2);
}

int
min(int v1, int v2)
{
    if(v1 < v2)
        return(v1);
    else
        return(v2);
}

int
main(void)
{
    int num_cases;

    scanf("%d", &num_cases); 
    for(int i = 0; i < num_cases; i++){

        int num_cows, num_steps;
        scanf("%d %d\n", &num_cows, &num_steps);

        char str_cows[num_cows+1];
        memset(str_cows, '.', num_cows);
        str_cows[num_cows] = '\0';
        /* printf("%s\n", str_cows); */

        for(int j = 0; j < num_cows; j++)
            str_cows[j] = getchar();
        /* printf("%s\n", str_cows); */

        int count = 0;
        char str_patches[num_cows+1];
        memset(str_patches, '.', num_cows);
        str_patches[num_cows] = '\0';


        int g_last = -1;
        int h_last = -1;
        char cow;
        for(int j = 0; j < num_cows; j++){

            cow = str_cows[j];

            if(cow == 'G'){
                if(j <= g_last) continue;                
                count++;
                int new_loc = j + num_steps;
                new_loc = min(new_loc, num_cows-1);
                if(str_patches[new_loc] != '.') new_loc = max(0, num_cows-2);
                str_patches[new_loc] = 'G';
                g_last = j + 2 * num_steps;
            }

            if(cow == 'H'){
                if(j <= h_last) continue;                
                count++;
                int new_loc = j + num_steps;
                new_loc = min(new_loc, num_cows-1);
                if(str_patches[new_loc] != '.') new_loc = max(0, num_cows-2);
                str_patches[new_loc] = 'H';
                h_last = j + 2 * num_steps;
            }

        } 
        
        printf("%d\n", count);
        printf("%s\n", str_patches);

    }

    return(0);
}
