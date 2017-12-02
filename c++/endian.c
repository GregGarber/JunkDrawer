#include <stdio.h>
#include <inttypes.h>





void writeDAC(uint16_t valDacA, uint16_t valDacB ) {
printf( "valDacA %X; valDacB %X: %X, ", valDacA, valDacB, (valDacA>>4) ); // 8 to 4
printf("%X, ",  (((valDacA & 0b00001111)<<4) | ((valDacB & 0b111100000000)>>8)) );
printf("%X \n",  ((valDacB&0b11111111)) );
}

int main(void){
    /*
    uint16_t test=0xABCD;
    uint16_t valA=0xAB05;
    uint16_t valB=0xCD04;
    
    uint8_t hi,lo;
    uint8_t b1,b2,b3;
    uint8_t tmp1, tmp2;

    hi=test>>8;
    lo=test&0xff;

    printf("%x is lo:%x, hi:%x\n", test, lo, hi);


    b1 = valA >> 8;
    b2 = ((valA & 0b00001111)<<4) | ((valB & 0b1111000000000000)>>12);
    b3= ((valB&0b00001111))| ((valB & 0b111100000000)>>4);
    printf("valA:%x valB:%x b1:%x, b2:%x, b3:%x\n", valA, valB, b1,b2,b3);
*/
uint16_t i=0;
while(1){    
  writeDAC(i,4095-i);
//  writeDAC(0,i);
  i++;
  if(i>4094) i=0;
}
    
    return 0;
}
