#include <stdio.h>

struct Box {
    float len; //lenght
    float wid; // width
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    float volume = boxPtr->len * boxPtr->wid * boxPtr->height;
    return volume;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    float surfaceArea = 2 * (boxPtr->len * boxPtr->wid + boxPtr->len * boxPtr->height + boxPtr->wid * boxPtr->height);
    return surfaceArea;
}

int main() {
    struct Box myBox;
    printf("Enter Length: ");
    scanf("%f",&myBox.len);
    printf("Enter width:");
    scanf("%f",&myBox.wid);
    printf("Enter height:");
    scanf("%f",&myBox.height);
    struct Box* boxPtr = &myBox;
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}