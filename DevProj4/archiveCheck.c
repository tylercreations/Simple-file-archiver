#include "externs.h"


  void archiveCheck()
  {
	
    int check = 0;
	i=0;
  	while(i<num_files) {

  int nameLen,size_of_file;
  int flag = 0;
  char buf[MAXX];
  

	fread(&nameLen,sizeof(int),1,archive);
	
	fread(buf, sizeof(char),nameLen, archive);
	buf[nameLen] = '\0';
	
	fread(&size_of_file, sizeof(int), 1, archive);
	
	if(strcmp(buf,string) != 0) 
	   printf("Strings [%s] [%s] do not match\n",buf,string);
	

	else 
	    {
		flag = 1;
		if(flag) {
		printf("The length of chars in the file: %d\n",nameLen);
		printf("The size of the file: %d\n",size_of_file);
		check++;
	    }
	}//else
	i++;
	}
	
	if(check >= 1) {
	printf("No other matching files found\n");
	exit(1);
	}
	
	else
	printf("No matching files found\n");
	exit(1);
	
       }







