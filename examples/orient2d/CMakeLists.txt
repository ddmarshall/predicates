################################################################################
# Copyright (c) 2018 David D. Marshall <ddmarsha@calpoly.edu>
#
# All rights reserved. Licensed under the MIT License. See LICENSE file in the 
# project root for full license information.
################################################################################

project(ORIENT2D_EXAMPLES)

# add the orient2d example
set (ORIENT2D_EXAMPLE_EXE orient2d_example)
set (ORIENT2D_EXAMPLE_SOURCE ${PROJECT_SOURCE_DIR}/orient2d.c)
set (ORIENT2D_EXAMPLE_HEADER ${PROJECT_SOURCE_DIR}/../include/predicates_example.h
                             ${PREDICATES_SOURCE_DIR}/include/predicates/predicates.h)

add_executable(${ORIENT2D_EXAMPLE_EXE} ${ORIENT2D_EXAMPLE_SOURCE} ${ORIENT2D_EXAMPLE_HEADER})
target_link_libraries(${ORIENT2D_EXAMPLE_EXE} ${_PREDICATES_EXAMPLES_LIBRARIES_LIST})

