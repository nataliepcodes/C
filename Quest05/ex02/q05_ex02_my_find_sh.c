/*
Written a command line that searches for all file names that end with .sh (without quotation marks) in the current directory and all its sub-directories. 
It should display only the name of files without the extension .sh.
*/

find -type f -name "*.sh" -exec basename {} .sh \;

