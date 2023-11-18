#include <iostream>
#include <string>
//#include "raylib.h"
#include <fstream>
//#include "lib.h"
#define RESET   "\033[0m"
#define BLACK1   "\033[30m"      /* Black */
#define RED1    "\033[31m"      /* Red */
#define GREEN1   "\033[32m"      /* Green */
#define YELLOW1  "\033[33m"      /* Yellow */
#define BLUE1    "\033[34m"      /* Blue */
#define MAGENTA1 "\033[35m"      /* Magenta */
#define CYAN1    "\033[36m"      /* Cyan */

#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
std::string  img;
///
/*void game() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
Texture2D er = LoadTexture("tes.png");
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLUE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
///

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    std::cout << "\033[2J\033[1;1H";
}
*/
using namespace std;
//using namespace lib;
bool isGui = false;

int main() {
system("cd home");
    string output;



    string command;//command var


    int oSLoop = 0; // var for the os loop

    int app = 0; //the app switcher var

// user stuff
restart:
    string user = "user";

    string input_;

    ifstream reader("user/user.txt");

    getline(reader, user);

    //
    string input; //the input var

    string apps = "nano (text editor) firefox (web browser) c++ (c++ compiler) apr (app launcher) lua (lua interpreter)\n"; // a list a apps for a command

    ///writer stuff

    string write;

   

    ofstream writer(write);

    ///


    cout << YELLOW1 << "<[  os menu ]>\n"; ///prints the os name

    cout << RED1 << "=========================================================================================================\n"<<BLUE1<<" ";

    while (oSLoop > -1) {
        oSLoop++;
        if (oSLoop > 10) {
            oSLoop = 0;
        }


        // main os code hear
        ///the shell code hear
        if (app == 0) {

            //  system("pwd");cout<<RED1<<"_______________________________________________________________________________________\n";

            if (isGui == false) {
                cout << BLUE1 << "[" << user << "]>" << BLUE1;
            }///if the user picks gui mode this will not be printed to the console
            //os code
            if (isGui == false) { cin >> input; } ///if the user enters gui mode it will not have user input


///
            if (input == "la") {
                cout << apps;
            } else if (input == "ls") {
                system("ls");


            } else if (input == "fe") {

                app =1;
            } else if (input == "fl") {
                output = "";
                system("ls");

                cin >> input;

                ifstream reader(input);
                getline(reader, output);

                if (output == "") {
                    cout << BOLDRED << "error : nothing in this file or file does not exist\n";
                } else {
                    cout << GREEN1 << output << "\n";
                }
            } else if (input == "c++")
            {
                cout<<"c++ compiler";
           cout<<"file name>" ;cout<<"ex name>"; cin >>input;cin>>input_;
             command = "c++ " +  input + " -o " + input_;
                system(command.c_str());

            }
             else if (input=="restart")
            {
                goto  restart;
            }
            else if (input=="apr")
            {
                cout<<"app launcher";
                system("ls");
                cout<<"\n";

               cout<<">";cin >>input;
                if (input =="os")
                {
                    cout <<BOLDRED<<" Permission denied ";
                    input =" ";
                }
                command = "./" +  input;
                system(command.c_str());
                cout<<"\n";
            }

            else if (input == "rm")
            {

                cout << "what file do you want to delete\n enter q to quit\n and enter 1 to over write the file\n enter 2 to have spaces in file";
                ///stuff
                cin >> input;
                ofstream writer(input);
                write.append(" ");
                writer << write;
                writer.close();
                ///
            }

            else if (input == "nano")

            {
                cout<<"entering nano..\n";
                system("nano");

                cout<<"exiting nano...\n";


            } else if (input=="fire")
            {
                system("firefox");
            }
            else if (input =="qwe3w")
            {
                system("pwd");
            }
            else if (input == "quit")
            {

                oSLoop = -1;

            }

           else if (input=="img")

            {
                cout <<"load a image\n";
                cin>>img;
           //   game();
                cout << "\033[2J\033[1;1H";

            }

            else if (input == "ver") {
                cout << "version 1.0.0 build 1\n";
            }
            else if (input == "acc") {
                cout<<RED1<<"app not added yet :(\n";

            } else if (input =="nut32")
            {

                isGui = true;
                isGui=false;//temp code
                cout<<"gui is not added yet\n";
             //  if( IsKeyDown(KEY_ESCAPE))
             //  {
               //    isGui = false;
            //   }

            } else if(input=="lua")
            {
cin>>input;
   command = "lua " + input;
                system(command.c_str());
            }
            else
            {
                cout << BOLDRED << " unknown command: " << input << "\n";
            }
            if (isGui == false)//if the user picks gui mode this will not be printed to the console
            {
            cout << RED1
                 << "=============================================================================================================\n"<<BLUE1<<"";
                }

        }
        ///

        //app code hear
        if (app == 1) {

            cout<<"file explorer 1.0";
       cin>>input;
       command = "cd " + input;
            if (input=="..")
            {
                input = "";
            }
            system(command.c_str());
            system("ls");
                // app = lib::app;
                //  lib::textEdit();




        }
        ///
    }

}
