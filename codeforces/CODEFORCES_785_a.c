#include <stdio.h>

int main(void)
{
    // tetra 4 cube 6 octa 8 dodec 12 icosa 20
    int faces[91] = { [(int)'T'] = 4 , [(int)'C'] = 6
                    , [(int)'O'] = 8 , [(int)'D'] = 12
                    , [(int)'I'] = 20 };
    int n;
    scanf("%d",&n) && getchar(); // \n
    
    int ans = 0;
    for(int i = 0; i < n; ++i){
        char c;
        scanf("%c",&c);
        ans += faces[(int)c];
        while( getchar() != '\n' );
    }
    printf("%d\n", ans);

    return(0);
}
