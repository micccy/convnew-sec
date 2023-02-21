#include <stdio.h>

unsigned long newsec,oldsec;

int main(int argc,char *argv[]){
    if(argc==2){
        sscanf(argv[1],"%lu",&oldsec);
        if(oldsec<=240000){
            newsec=oldsec%100;
            newsec+=((oldsec/100)%100)*60;
            newsec+=(oldsec/10000)*3600;
            oldsec=newsec;
            newsec=(newsec*125)/108;
            printf("(%5lu) %2lu:%02lu:%02lu in old time == %01lu.%04lu in new time\n", oldsec, oldsec/3600, (oldsec/60)%60, oldsec%60, newsec/10000, newsec%10000);
        }else printf("%lu > 240000 !!!\n", newsec);
    }else{
        printf("This utility converts old seconds in new seconds\n");
    };
    return 0;
}
