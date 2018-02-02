################################################################################
# Copyright (c) 2018 David D. Marshall <ddmarsha@calpoly.edu>
#
# All rights reserved. Licensed under the MIT License. See LICENSE file in the 
# project root for full license information.
################################################################################

project(PREDICATES_LIBRARY)

# add the predicates library
set (PREDICATES_SOURCE ${PREDICATES_SOURCE_DIR}/src/predicates.c)
set (PREDICATES_HEADER ${PREDICATES_SOURCE_DIR}/include/predicates/predicates.h)

add_library(${PREDICATES_LIBRARIES} ${PREDICATES_SOURCE} ${PREDICATES_HEADER})

