#ifndef _BLUR_FILTER_H_
#define _BLUR_FILTER_H_

/* Define the half-width of the box blur filter. */
#define BLUR_SIZE 1
#define TILE_SIZE 32

/* Define the structure for our image or 2D array. */
typedef struct image_s {
    int size; /* Size of one side of the image. */
    float *elements; /* Individual pixels in the image. */
} image_t;

#endif /* BLUR_FILTER_H_ */
