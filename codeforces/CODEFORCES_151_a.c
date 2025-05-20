#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // friends , bottles , milliliters , limes , slices , gram salt , each needs milliliters , each salt
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",
           &n,&k,&l,&c,&d,&p,&nl,&np);
    getchar();//\n

    int nmilli = k * l;
    int nslice = c * d;
    
    int tmilli = n * nl;
    int tslice = n;
    int tsalt = n * np;
    
    int ans = 0;
    while(true){
        if( ((nmilli - tmilli) >= 0) && 
            ((p - tsalt) >= 0)       && 
            ((nslice - tslice) >= 0) ){
            nmilli -= tmilli;
            p -= tsalt;
            nslice -= tslice;
            ans++;
        }else{
            break;
        }
    }
    printf("%d\n",ans);

    return(0);
}
