#ifndef TABLE_H
#define TABLE_H

#include <stdint.h>
/*define individual character table entries*/
typedef struct {uint8_t bin; char * text;} charTableEntry;
/*define character table data. you can edit the character table used by the program here - it's just a bunch of lines, and the format for each line is as follows:
{0xFF, "STRING"},\ 
where 0xFF is the encoded value of the character, and STRING is the character or string of characters it represents*/
#define CHAR_TBL {\
{0x00,"FULL_TERMINATOR"/*full terminator: closes the entire textbox and ends text printing mode*/},\
{0x01,"NEWLINE"/*newline: begins printing text on the next line of the textbox*/},\
{0x03,"PAGE_TERMINATOR"/*page terminator: ends the current textbox, but does not end text printing mode until a full terminator is encountered*/},\
{0x10,"VAR_OERSTED_NAME"},\
{0x11,"VAR_POGO_NAME"},\
{0x12,"VAR_CUBE_NAME"},\
{0x13,"VAR_INHERITOR_NAME"},\
{0x14,"VAR_SUNDOWN_NAME"},\
{0x15,"VAR_MASARU_NAME"},\
{0x16,"VAR_AKIRA_NAME"},\
{0x17,"VAR_OBORO_NAME"},\
{0x18,"VAR_TEMP_CHAR_1_NAME"},\
{0x19,"VAR_TEMP_CHAR_2_NAME"},\
{0x1A,"VAR_TEMP_CHAR_3_NAME"},\
{0x1B,"VAR_MASARU_ROUND_NUMBER?"},\
{0x1C,"?"},\
{0x20,"0"},\
{0x21,"1"},\
{0x22,"2"},\
{0x23,"3"},\
{0x24,"4"},\
{0x25,"5"},\
{0x26,"6"},\
{0x27,"7"},\
{0x28,"8"},\
{0x29,"9"},\
{0x2A,"A"},\
{0x2B,"B"},\
{0x2C,"C"},\
{0x2D,"D"},\
{0x2E,"E"},\
{0x2F,"F"},\
{0x30,"G"},\
{0x31,"H"},\
{0x32,"I"},\
{0x33,"J"},\
{0x34,"K"},\
{0x35,"L"},\
{0x36,"M"},\
{0x37,"N"},\
{0x38,"O"},\
{0x39,"P"},\
{0x3A,"Q"},\
{0x3B,"R"},\
{0x3C,"S"},\
{0x3D,"T"},\
{0x3E,"U"},\
{0x3F,"V"},\
{0x40,"W"},\
{0x41,"X"},\
{0x42,"Y"},\
{0x43,"Z"},\
{0x44,"a"},\
{0x45,"b"},\
{0x46,"c"},\
{0x47,"d"},\
{0x48,"e"},\
{0x49,"f"},\
{0x4A,"g"},\
{0x4B,"h"},\
{0x4C,"i"},\
{0x4D,"j"},\
{0x4E,"k"},\
{0x4F,"l"},\
{0x50,"m"},\
{0x51,"n"},\
{0x52,"o"},\
{0x53,"p"},\
{0x54,"q"},\
{0x55,"r"},\
{0x56,"s"},\
{0x57,"t"},\
{0x58,"u"},\
{0x59,"v"},\
{0x5A,"w"},\
{0x5B,"x"},\
{0x5C,"y"},\
{0x5D,"z"},\
{0x5E,","},\
{0x5F,"'"},\
{0x60,"\""},\
{0x62,"?"},\
{0x63,"!"},\
{0x64," "},\
{0x65,"("},\
{0x66,")"},\
{0x67,"."},\
{0x68,":"},\
{0x69,"-"},\
{0x6A,"♂"},\
{0x6B,"♀"},\
{0x6C,"±"},\
{0x6D,"/"},\
{0x6E,"+"},\
{0x6F,"_"},\
{0x70,"Xin Shan Quan"},\
{0x71,"Yuan Jou"},\
{0x72,"Li Kuugo"},\
{0x73,"Sammo Hakka"},\
{0x74,"Sundown"},\
{0x75,"Mad Dog"},\
{0x76,"Oersted"},\
{0x77,"Straybow"},\
{0x7A,"Pw"},\
{0x7B,"Sp"},\
{0x7C,"Vt"},\
}

#endif /* TABLE_H */
