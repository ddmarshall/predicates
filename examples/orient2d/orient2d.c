/*******************************************************************************
 * Copyright (c) 2018 David D. Marshall <ddmarsha@calpoly.edu>
 *
 * All rights reserved. Licensed under the MIT License. See LICENSE file in the
 * project root for full license information.
 ******************************************************************************/

#include <stdio.h>

#include "predicates/predicates.h"

int main(int argc, char *argv[])
{
  REAL a[2], b[2], c[2];
  REAL rtn;

  /* Initialize the predicates library */
  exactinit();

  /* build a simple orient case */
  a[0] = 1;
  a[1] = 1;
  b[0] = 3;
  b[1] = 2;
  c[0] = 3;
  c[1] = 1;
  rtn = orient2dfast(a, b, c);

  printf("Point c is on ");
  if (rtn > 0)
  {
    printf("left side ");
  }
  else if (rtn < 0)
  {
    printf("right side ");
  }
  else
  {
    printf("top ");
  }
  printf("of line.\n");

  return 0;
}

