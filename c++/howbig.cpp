#include <stdio.h>
    unsigned char plethECGPacket[] = {
        0x7e,
        0x54, 0x02, 0x00, 0x04, 0x00, 0x00, 0x9f, 0x11, 0x12, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x16, 0x01, 0x01, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0x20, 0x00,
        0xbd, 0xbd, 0x20, 0x00, 0xbd, 0xbd, 0x20, 0x00, 0x9f, 0x11, 0x12, 0x58, 0x0b, 0x30, 0x00, 0x00,
        0x00, 0x12, 0x4d, 0x00, 0x37, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x01, 0x80,
        0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x01, 0x80,
        0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
        0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
        0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
        0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x26, 0x54, 0x00, 0x4a, 0x00, 0x01, 0x80,
        0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x1a, 0x03, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x2b, 0x08, 0x2b, 0x08, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
        0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
        0x01, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0xff, 0x8d, 0x4d, 0x00,
        0x50, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0xad, 0x01, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x0d, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
        0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x40, 0x41, 0x00, 0x9f, 0x11,
        0x12, 0x58, 0x08, 0x30, 0x00, 0x00, 0x00, 0x02, 0x4d, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80,
        0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80,
        0x02, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x12, 0x01, 0x80, 0x37, 0x00, 0x01, 0x80, 0x01, 0x80,
        0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x40, 0x41, 0x01, 0x0c, 0x7e
    };
unsigned char noReadingsPackets[] = {
    0x7e, 0x54, 0x02, 0x00, 0x04, 0x00, 0x00, 0x46, 0x0e, 0x12, 0x58, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x16, 0x01, 0x01, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xbd,
    0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0xbd, 0x46, 0x0e, 0x12, 0x58, 0x0b,
    0x3a, 0x00, 0x00, 0x00, 0x12, 0x02, 0x80, 0x0a, 0x81, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01,
    0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x80, 0x01,
    0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x0c, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x00, 0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x02, 0x80, 0x02,
    0x80, 0x01, 0x80, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d,
    0x1a, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x08, 0x28, 0x08, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01,
    0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x01, 0x80, 0x01,
    0x80, 0x01, 0x80, 0x01, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0xff,
    0x8d, 0x02, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0xad, 0x01, 0x01, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x0d, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x41,
    0x00, 0x46, 0x0e, 0x12, 0x58, 0x08, 0x38, 0x00, 0x00, 0x00, 0x02, 0x02, 0x80, 0x00, 0x00, 0x01,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02,
    0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02,
    0x80, 0x02, 0x80, 0x02, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x12, 0x03, 0x80, 0x0a, 0x81, 0x03,
    0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03,
    0x80, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0xcf, 0x7e
};
unsigned char canaryRequest[] = {
0x7e,
0x31, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x05, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00,
0x00, 0x4d, 0x7e
};

int main(void){
    printf("noReadingsPackets: %lu\n", sizeof(noReadingsPackets));
    printf("plethECGPacket: %lu\n", sizeof( plethECGPacket));
    printf("canaryRequest: %lu\n", sizeof( canaryRequest));
    return 0;
}