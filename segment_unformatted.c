#include <stdio.h>
#include <stdlib.h>

static int compute_length (int, int);

int main (void) {
  typedef struct  {    int left;    int right;    int length;  } seg_t;

  seg_t *seg1, *seg2;

  seg1 = (seg_t *) malloc (sizeof (seg_t));  seg2 = (seg_t *) malloc (sizeof (seg_t));

  printf ("Enter left edge of segment 1: "); scanf ("%d", &(seg1->left));  printf ("Enter right edge of segment 1: ");  scanf ("%d", &(seg1->right));
  printf ("Enter left edge of segment 2: ");  scanf ("%d", &(seg2->left));
  printf ("Enter right edge of segment 2: ");  scanf ("%d", &(seg2->right));  seg1->length = compute_length (seg1->left, seg1->right);
  seg2->length = compute_length (seg2->left, seg2->right);

  if (seg1->length == seg2->length)
    {     printf ("Segment lengths are equal\n");   }
  else    {      printf ("Segment lengths are NOT equal\n");    }  return 0;}

int compute_length (int left, int right){  return (right - left);}
