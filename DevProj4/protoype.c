#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "externs.h"




  int main(int argc, char* argv[])
  {
    
	if(strcmp(argv[1],"-x") == 0) {
	  	
		archive = fopen(argv[2], "rb");
		if(!archive){printf("Problem opening the file\n");exit(1);}
		fread(&num_files,sizeof(int),1,archive);
			printf("The # of files is: %d\n",num_files);
		
	
		extract(archive);
		
		
	       }
	


			/*********** Writing to the archivehive *********/
	else if(strcmp(argv[1],"-c") == 0) {
		archive = fopen(argv[2], "w+");
		if(!archive){printf("Problem opening the file\n");exit(1);}
		
   		num_files = argc - 3;

		fwrite(&num_files,sizeof(int),1,archive);printf("\t\tThe number of files: %d\n",num_files);
		
        i = 3;

	 while(i<argc){
	 strcpy(fileName,argv[i]);
	   printf("\nThe file [%s]\n",fileName);
	   		fp = fopen(fileName,"r");
			if(!fp){printf("Problem opening the file\n");exit(1);}
			insert_l_s_z();
		i++;
		fclose(fp);

	}
		
		
       }


	else if(strcmp(argv[1],"-p") == 0) {
		archive = fopen(argv[3], "rb");
		if(!archive){printf("Problem opening the file\n");exit(1);}
		fread(&num_files,sizeof(int),1,archive);
			printf("The number of files: %d\n",num_files);
		strcpy(string,argv[2]);
			printf("Searching archive for: %s\n",string);
		
		archiveCheck();
		}

	else
	    {
		printf("There were not enough command line args entered");
		exit(1);
	    }



   return 0;
   }
