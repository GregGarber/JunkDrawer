#include <stdio.h>

void testit(unsigned char count){
    unsigned char mask, tst, result;
    bool have_time=false;
    mask = 7;
    tst = 8;
    have_time= ((count & 8) == 8); // If count Bit 3 is set, then a time stamp follows
    printf("start count: %d\n", count);

    if(have_time){
        printf("Time Detected\n");
    }else{
        printf("No Time\n");
    }
    printf("after time test count: %d\n", count);
    count = (count & mask);
    printf("ending count after mask: %d\n", count);
}

int main(){
    for(unsigned char count = 0; count < 0x0d; count++){
    testit(count);
    }
    return 0;
}




