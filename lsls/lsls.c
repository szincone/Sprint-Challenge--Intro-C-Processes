#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  char *dir_name;
  // no argument recieved
  if (argc == 1)
  {
    dir_name = ".";
  }
  else if (argc == 2)
  {
    dir_name = argv[1];
  }
  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}