#include<iostream>
#include<sstream>
using namespace std;
void dump( const void * mem, unsigned int n ) {
    const char * p = reinterpret_cast< const char *>( mem );
    for ( unsigned int i = 0; i < n; i++ ) {
        std::cout << hex << int(p[i]) << " ";
    }
    std::cout << std::endl;
}

int main(void){
    //char * f = "This is something";
    char * f = 0;
    dump( f, 10 );

    return 0;
}
