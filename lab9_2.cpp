#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream source;
    ofstream x;
    source.open("C:\\Users\lab314-1\Desktop\New folder\lab9-2562-2-mobmabpp\\cheerbook.txt");
    string textline;
    bool havetext;
    havetext = getline(source,textline);
    x.open("cheerbook_copy.txt");
    x<< "-------------------- SOTUS ---------------------"<<endl;
    while(havetext){
        cout<< textline << "\n";
        havetext = getline(source,textline);
    }
    x << "-------------------- SOTUS ---------------------"<<endl;
    source.close();
    x.close();
    return 0;
}
//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
