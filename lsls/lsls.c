#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

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
  DIR *d = opendir(dir_name);

  // Repeatly read and print entries
  struct dirent *ent;
  while ((ent = readdir(d)) != NULL)
  {
    struct stat s_buff;
    if (S_ISREG(s_buff.st_mode))
    {
      printf("%10lld %s\n", s_buff.st_size, ent->d_name);
    }
    else if (S_ISDIR(s_buff.st_mode))
    {
      printf("%10lld %s\n", "<DIR>", ent->d_name);
    }
    else
    {
      printf("%10lld %s\n", "", ent->d_name);
    }
  }
  // Close directory
  closedir(d);

  return 0;
}