#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 1

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#pragma warning(disable : 4996) 
void array_to_str_line(char* prefix, char* buffert, uint16_t length, uint8_t* hexArray, uint16_t hexArrayLength)
{
    strcat(buffert, prefix);
    for (int i = 0; i < hexArrayLength; i++)
    {
        char* innerBuffer[15] = {0};
        sprintf(innerBuffer, " 0x%02X ", hexArray[i]); 
        strcat(buffert, innerBuffer);
    }
    strcat(buffert, "\r\n");
}

int main()
{
    uint8_t hexArray[] = { 0x09, 0x2F ,0xA2 };
    
    char* buffert[1000];
    buffert[0] = '\0';

    array_to_str_line("Line 1", buffert, 100, hexArray, ARRAY_LENGTH(hexArray));
    
    uint8_t hexArray2[] = { 0x1C, 0x2F ,0xA2 };
    array_to_str_line("Line 2", buffert, 100, hexArray2, ARRAY_LENGTH(hexArray2));

    printf(buffert);
    
    printf("Hello, World!");
    getchar();
    return 0;
}
