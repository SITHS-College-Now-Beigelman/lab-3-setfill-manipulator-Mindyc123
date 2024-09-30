//Mindy Chen
//Lab 3
//9.30.24

#include <iostream> 
#include <iomanip>

using namespace std;


int main()


{
    cout << setfill('#');
    cout << setw(87) << " " <<endl;

    //Filled 87 spaces with hashtags

    cout << setfill(' ');

    //Resets the fill back to spaces

    cout << "#" << setw(85) << "#" <<endl; 
    cout << setw(59) << "# Ways to access the Task Manager on your Windows computer:" << setw(27) << "#" <<endl;
    cout << "#" << setw(85) << "#" <<endl; 
    cout << "#" << setw(59) << "Press the key combination Ctrl + Shift + Escape" << setw(26) << "#" <<endl;                  
    cout << "#" << setw(85) << "#" <<endl; 

    //Adds a hashtag on the first space and then writes the text with the same amount of space at the start by increasing the setw spaces. Then, after a certain space, there is another hashtag

    cout << "#" << setw(83) << "Press the key combination Ctrl + Alt + Delete and select 'Task Manager'" << setw(2) << "#" <<endl;        
    cout << "#" << setw(85) << "#" <<endl; 
    cout << "#" << setw(64) << "Type 'Task Manager' in the Windows Start menu search" << setw(21) << "#" <<endl;
    cout << "#" << setw(85) << "#" <<endl; 

    //Fills the first space with a hashtag and then after 84 spaces there is another hashtag

    cout << setfill('#');
    cout << setw(87) << " " <<endl;

    return 0;
}

/*
######################################################################################
#                                                                                    #
# Ways to access the Task Manager on your Windows computer:                          #
#                                                                                    #
#            Press the key combination Ctrl + Shift + Escape                         #
#                                                                                    #
#            Press the key combination Ctrl + Alt + Delete and select 'Task Manager' #
#                                                                                    #
#            Type 'Task Manager' in the Windows Start menu search                    #
#                                                                                    #
######################################################################################
*/
