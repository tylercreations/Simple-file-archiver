#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

 #define MAXX 1000

void insert_l_s_z();
void extract();
void archiveCheck();








  char fileName[MAXX];
  char string[MAXX];
  int i,fileLen,num_files,num_chars,file_size;
  FILE *archive;
  FILE *fp;
  struct stat bufst;
