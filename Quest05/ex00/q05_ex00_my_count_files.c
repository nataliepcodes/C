/*
Created a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. 
It should include ., the starting directory.
*/
ls -l | wc -l //gandalf not passed

find . -type d -or -type f | wc -l  //gandalf passed

