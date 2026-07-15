#include<iostream>
#include<filesystem>
#include<string>
#include<sstream>
#include<vector>
#include <boost/algorithm/string.hpp>



using namespace std;
using namespace std::filesystem;


void help(){

    cout<<"help window \n";
    cout<<"help -- show help \n"
        <<"show -- show the current path \n"
        <<"teleport -- teleport to another directory \n";
}
void show(){
    cout<<current_path();
}

void teleport(string path){
    current_path(path);
}





//main
int main(){
    string command;



    cout<<"\033[32m"<<"Wizard Shell"<<endl;
    while(true){
        cout<<">> ";
        getline(cin, command);


        vector<string> cmds;
        boost::split(cmds, command, boost::is_any_of("\t "), boost::token_compress_on);



        // string s1, s2;
        // stringstream ss( command );
        // ss>>s1>>s2;
        
        if(command == "help"){
            help();
        }
        else if(command == "bye"){
            cout<<"good bye \n";
            break;
        }
        else if(command == "show"){
            show();
        }
        else if(cmds[0]=="teleport"){
            
            teleport(cmds[1]);

        }
        else {
            cout<<"type valid command";
        };

        cout<<endl;
    };
    




    return 0;


}


