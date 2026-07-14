#include<iostream>
#include<filesystem>
#include<string>
#include<sstream>



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
    current_path();
}



//main
int main(){
    string command;
    cout<<"Wizard Terminal"<<endl;
    while(true){
        cout<<">> ";
        getline(cin, command);
     
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
        else if(command=="teleport"){
            

        }
        else {
            cout<<"type valid command";
        };

        cout<<endl;
    };
    




    return 0;


}


