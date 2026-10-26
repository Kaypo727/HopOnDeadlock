#include <windows.h>
#include <shellapi.h>

int main() 
{
    //The number is the game id, every game on steam has a unique game id
    //If you want to change this to run any other game feel free to do so
    const char* gameUrl = "steam://rungameid/1422450";

    ShellExecuteA(NULL, "open", gameUrl, NULL, NULL, SW_SHOWNORMAL);
}
