################################################################################
# Copyright (c) 2018 David D. Marshall <ddmarsha@calpoly.edu>
#
# All rights reserved. Licensed under the MIT License. See LICENSE file in the 
# project root for full license information.
################################################################################

project(PREDICATES_EXAMPLES)

# include common example header files
include_directories(${PROJECT_SOURCE_DIR}/include)

# set what libraries need to be used
set(_PREDICATES_EXAMPLES_LIBRARIES_LIST "${PREDICATES_LIBRARIES}")

add_subdirectory(orient2d)
#####add_subdirectory(util)

