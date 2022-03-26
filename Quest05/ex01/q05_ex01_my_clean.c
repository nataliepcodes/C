/*
Created a command line that search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by #. 
It also prints and deletes all files found
*/

find . \( -type f -or -type d \) \( -name "*~" -or -name "*#" -and -name "#*" \) -print -delete
