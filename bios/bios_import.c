#include <stdio.h>
#include <stdlib.h>

int importBIOS(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return -1;
    }

    // Get the file size
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate memory for the BIOS
    char* bios = (char*)malloc(fileSize);
    if (bios == NULL) {
        printf("Error allocating memory for BIOS\n");
        fclose(file);
        return -1;
    }

    // Read the BIOS from the file
    size_t bytesRead = fread(bios, 1, fileSize, file);
    if (bytesRead != fileSize) {
        printf("Error reading BIOS from file\n");
        free(bios);
        fclose(file);
        return -1;
    }

    // Close the file
    fclose(file);

    // TODO: Use the imported BIOS in your virtual machine

    // Free the allocated memory
    free(bios);

    return 0;
}

int main() {
    const char* filename = "seabios.bin";
    int result = importBIOS(filename);
    if (result == 0) {
        printf("BIOS imported successfully\n");
    } else {
        printf("Failed to import BIOS\n");
    }

    return 0;
}
