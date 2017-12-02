#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Parent{
    public:
        Parent();
        void checksum(vector<int> &x);

    protected:
        int a=0;
        int b=0;
        vector<int> &n;
};

Parent::Parent(){
    a=1;
    b=2;
}

Parent::checksum(vector<int> &x){
    int x=0;
    for(auto i: x){
        x+=i;
    }
    cout << "Parent Checksum is: "<< x;
}

class Child : public Parent{
    public:
    Child();

    protected:
    int c=0;
    int d=0;
};
