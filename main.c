#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "table.h"
#include "encode.h"
#include "decode.h"

int main(int argc, char ** argv){
/*allocate hashtable*/
const charTableEntry charTable[255] = CHAR_TBL;

/*allocate file pointer*/
FILE * filePtr;

/*check for corrrect no. of args*/
if (argc != 3){
printf("Usage:\n%s operation filename\nExamples:\n%s hexify file.txt\n%s textify file.bin\n", argv[0], argv[0], argv[0]);
exit(EXIT_SUCCESS);
}

/*open file from arg*/
filePtr = fopen(argv[2], "r");

/*check if good*/
if (!filePtr){
printf("Error: file \"%s\" does not exist in the current directory\n", argv[2]);
exit(EXIT_SUCCESS);
}

/*check option arg*/
if (strcmp(argv[1], "hexify") == 0 ){
printf("TODO: Call encode function\n");

exit(EXIT_SUCCESS);
}

else if (strcmp(argv[1], "textify") == 0 ){
printf("TODO: Call decode function\n");

exit(EXIT_SUCCESS);
}

else if (strcmp(argv[1], "sexify") == 0 ){
printf("( ͡° ͜ʖ ͡°)\n");
exit(EXIT_SUCCESS);
}

else {
printf("Usage:\n%s operation filename\nExamples:\n%s hexify file.txt\n%s textify file.bin\n", argv[0], argv[0], argv[0]);
exit(EXIT_SUCCESS);
}

}
