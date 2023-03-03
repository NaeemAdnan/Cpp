#include<iostream>
using namespace std;

class str_count{

public:
    string str;
    int c=0;
    void input();
    void char_count();
};
void str_count :: input(){
cout<<"Enter a string: \n";
getline(cin,str);
}

void str_count :: char_count(){
for(i=0; i<str.length(); i++){
    if(str[i]= "  "){
        c++;
    }
}
cout<<"The number of character: "<<c;
}

int main(){
char_count obj;
obj.input;
obj. char_count();

}

