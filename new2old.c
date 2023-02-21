#include <stdio.h>

unsigned long newsec,oldsec;

int main(int argc,char *argv[]){
    if(argc==2){
        sscanf(argv[1],"%lu",&newsec);
        if(newsec<=100000){
            oldsec=(newsec*108)/125;
            printf("%01lu.%04lu in new time == %2lu:%02lu:%02lu (%5lu) in old time\n", newsec/10000, newsec%10000, oldsec/3600, (oldsec/60)%60, oldsec%60, oldsec);
        }else printf("%lu > 100000 !!!\n", newsec);
    }else{
        printf("This utility converts new time (in seconds) in standard old time\n");
    };
    return 0;
}
