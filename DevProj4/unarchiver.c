#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "externs.h"




  void extract()
  {
	int ch;
   char char_ch;
	
	i=0;
  	while(i<num_files) {

  int nameLen,size_of_file;
  char buf[MAXX];

	fread(&nameLen,sizeof(int),1,archive); printf("The num of chars in the filename is: %d\n",nameLen);
	
	fread(buf, sizeof(char),nameLen, archive);
	buf[nameLen] = '\0';
	printf("The name of the file is: %s\n",buf);
		
	FILE *output;
	fp = fopen(buf, "w");
	if(!fp){printf("Problem opening the file\n");exit(1);}

	fread(&size_of_file, sizeof(int), 1, archive);

	int j;
	for(j=0;j<size_of_file;j++) {
		fread(&char_ch,sizeof(char),1,archive);
		printf("The current char is %c\n",char_ch);
		fprintf(fp,"%c",char_ch);
		}

	fclose(output);


         i++;
	}
	
  }

  




