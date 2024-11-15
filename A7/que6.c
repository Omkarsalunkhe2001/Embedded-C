//Define a Bit-Field Structure with fields for low, mid, and high. Set Values for these fields. 
//Print Values of low, mid, and high. Combine Fields into a single unsigned int and print its 
//hexadecimal representation.
// omkar salunkhe

#include <stdio.h>

// Define the bit-field structure
struct BitField {
    unsigned int low : 4;  
    unsigned int mid : 4;  
    unsigned int high : 4; 
};

int main() {
    struct BitField bf;

    // Set values for the fields
    bf.low = 5;    
    bf.mid = 10;   
    bf.high = 12; 

    // Print individual field values
    printf("Low field: %u\n", bf.low);
    printf("Mid field: %u\n", bf.mid);
    printf("High field: %u\n", bf.high);

    // Combine the fields into a single unsigned int
    unsigned int combined = (bf.high << 8) | (bf.mid << 4) | bf.low;

    // Print the combined value in hexadecimal format
    printf("Combined value (in hex): 0x%X\n", combined);

    return 0;
}
