This is a shell script that launches Deadlock when it's run

You can send this to your friends to trick them into having fun!

You can even change the game id to change the game that launches or rename the .exe file to make it more enticing!

Discord will automatically mark any exe file as malicious, if you're worried about malware consider compiling from source

Here's how you change the game that launches and build the .exe from source

Step 1. Download the main.cpp file and open it in your editor of choice (I'm using VS Code but any editor should work)

Step 2. Find the game id of your desired game on the steam store, go to the game's store page and it can be found in the URL at the top of the page.
Deadlock's URL looks like this https://store.steampowered.com/app/1422450/Deadlock/

1422450 is Deadlock's game id

Step 3. In main.cpp replace the number in "steam://rungameid/1234567" with your desired game id

Step 4. compile the file and make sure to link the dependencies, below is an example of what to type in the terminal and what everything means

g++ main.cpp -o example.exe -lshell32

g++ is the compiler I chose

main.cpp is the file you want to compile

-o is the output flag

example.exe is the name of the resulting exe file

-l is the link flag

shell32 is the library that is required for the script to work (If you forget to link the library it will not work!)

If you did everything correctly you should have a working exe file that opens a steam game when opened!
