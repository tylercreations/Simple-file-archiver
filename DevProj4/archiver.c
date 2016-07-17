#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "externs.h"




  void insert_l_s_z()
  {
   int ch;
   char char_ch;
   fileLen = strlen(fileName);


   stat(fileName,&bufst);
   file_size = bufst.st_size;//filesize

    		printf("the length of the file is [%d]\n",file_size);

    fwrite(&fileLen,sizeof(int),1,archive);//writing the # of chars
		printf("the length of the name of the file is [%d]\n",fileLen);

    fwrite(&fileName,fileLen,1,archive);//name of file
		printf("the name of the file is [%s]\n",fileName);
    fwrite(&file_size,sizeof(int),1,archive);
		printf("the size of the file is [%d]\n",file_size);

	//write the chars of the file below
	rewind(fp);
	int j;
		for(j=0;j<file_size;j++) {
		    ch = fgetc(fp);
		    char_ch = (char)ch;
		printf("The current char is %c\n",char_ch);
		fwrite(&char_ch,sizeof(char),1,archive);
		}







    
  }
