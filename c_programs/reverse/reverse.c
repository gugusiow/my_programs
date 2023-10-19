#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    // TODO #1
    if (argc != 3){
        printf("Usage: ./reverse input.wav output.wav\n");
        return 1;
    }

    // Open input file for reading
    // TODO #2
    FILE *input = fopen(argv[1], "r");
    if (input == NULL){
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read header
    // TODO #3
    WAVHEADER header;   //everything before the "audio data" itself is the WAV header, in this case 44 bytes long
    fread(&header, 1, 44, input);

    // Use check_format to ensure WAV format
    // TODO #4
    if (check_format(header) == 1){    //idk why we need to put this "&" symbol here?? ? ?
        printf("The file you have entered is not a .wav file\n");
        return 1;
    }

    //another method of checking is that: audio format of .wav files will return "1". Any other value is not a .wav file
    if (header.audioFormat != 1){
        printf("The file you have entered is not a .wav file\n");
        return 1;
    }

    // Open output file for writing
    // TODO #5
    FILE *output = fopen(argv[2], "w"); //create a file to store output
    if (output == NULL){    //if output file is not .wav, then cannot write
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Write header to file
    // TODO #6
    fwrite(&header, 1, 44, output);

    // Use get_block_size to calculate size of block
    // TODO #7
    int block_size = get_block_size(header);
    //printf("%i\n", block_size); //checking the size of the block

    // Write reversed audio to file
    // TODO #8
    //using ftell, fseek etc
    //SOMETHING WRONG; edit: fixed
    BYTE buffer[block_size];
    if (fseek(input, block_size, SEEK_END)){    //syntax: fseek(file_ptr offset aka how many bytes the file pointer needs to be moved, location from which the file ptr needs to be moved)
        return 1;   //this code finds the last pointer aka the end of the audio file, if it fails for whatever reason, then it will return 1
    }

    //ftell returns the current position of a file ptr.
    while (ftell(input) - block_size > 44){    //we know that the header is 44 bytes, so as long as our current position is > 44, this loop will run
        fseek(input, -2 * block_size, SEEK_CUR);
        //dont think i need this if statement....
        // if(fseek(input, -2 * block_size, SEEK_CUR)){    //-2 because we are moving backwards, and because we have to move 2 block sizes back after each read.
        //     return 1;   //fseek() will return 0 if successful; non-zero if it fails so we will end the code here.
        // }
        fread(buffer, block_size, 1, input);
        fwrite(buffer, block_size, 1, output);
    }

fclose (input);
fclose (output);
}

int check_format(WAVHEADER header)
{
    // TODO #4
    if (header.format[0] == 'W' && header.format[1] == 'A' && header.format[2] == 'V' && header.format[3] == 'E'){
        //if meets the conditions above, it is a .wav file
        return 0;
    }
return 1;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    //method 2, converting bits per sample to bytes
    //rmb that 1 byte has 8 bits
    int block_size = (header.numChannels * header.bitsPerSample) / 8;   //formula stated in specifications

    //method 1, yea this is wrong
    //int block_size = header.subchunk2Size;  //dk if this is correct....

    return block_size;
}