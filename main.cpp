#include<iostream>
#include<filesystem>
#include<string>
#include<sstream>
#include<vector>
#include <boost/algorithm/string.hpp>
#include <cstdlib>



using namespace std;
using namespace std::filesystem;


void help(){

    cout<<"help window \n";
    cout<<"help -- show help \n"
        <<"show -- show the current path \n"
        <<"teleport -- teleport to another directory \n"
        <<"wipe -- wipe the whole screen"
        <<"reborn -- rename a file";
}

void clear(){
    system("clear");    

}

void show(){
    cout<<current_path();
}

void teleport(string path){
    filesystem::current_path(path);
}

void reborn(string fname, string newfname){

    // if(filesystem::rename(fname, newfname)){
    //     cout<<"reborned..";
    // }
    // else{
    //     cout<<"reborn declined...";
    // };

    try{
        filesystem::rename(fname, newfname);
        cout<<"reborned..!";
    }
    catch(const filesystem_error& e){
        cout<<"reborn was declined...!";
    };
    

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
        else if(command == "wipe"){
            clear();
        }
        else if(cmds[0] == "summon"){
            if(create_directory(cmds[1])){
                cout<<"magic done"<<endl;

            }
            else{
                cout<<"summon already exist, no magic done";
            };
        }
        else if(cmds[0] == "reborn"){
            reborn(cmds[1], cmds[2]);
        }
        else {
            cout<<"type valid command";
        };

        cout<<endl;
    };
    




    return 0;


}


