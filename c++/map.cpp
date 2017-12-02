#include <inttypes.h>
#include <iostream>
#include <vector>
#include <map>
//#include <pair>
#include <string>

using namespace std;


int main(void){
    //typedef pair<const Key, T> value_type;
    map<string, string> mapping;
    string key="Alpha";
    string value = "Alpha is the first Greek letter";
    mapping[key]=value;
    cout << key << " " << mapping[key]<<endl;
    return 0;
}
