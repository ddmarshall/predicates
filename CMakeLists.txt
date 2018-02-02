################################################################################
# Copyright (c) 2018 David D. Marshall <ddmarsha@calpoly.edu>
#
# All rights reserved. Licensed under the MIT License. See LICENSE file in the 
# project root for full license information.
################################################################################

cmake_minimum_required(VERSION 3.0)

project(PREDICATES
        VERSION 1996.0.0
        LANGUAGES C
                  CXX)

# prevent in source builds
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "In-source builds are not allowed.")
endif ()

################################################################################
# Setup PREDICATES with version numbers
################################################################################
math(EXPR PREDICATES_NUMBER_VERSION "10000*${PREDICATES_VERSION_MAJOR}
                                    +100*${PREDICATES_VERSION_MINOR}
                                    +${PREDICATES_VERSION_PATCH}")

configure_file(${PREDICATES_SOURCE_DIR}/cmake/predicates_versions.h.in 
               ${PREDICATES_BINARY_DIR}/include/predicates/versions.h @ONLY)

include_directories(${PREDICATES_SOURCE_DIR}/include)
include_directories(${PREDICATES_BINARY_DIR}/include)

set(PREDICATES_LIBRARIES predicates)

################################################################################
# Add subdirectories
################################################################################

add_subdirectory(src)
add_subdirectory(examples)

####if (CPPTEST_FOUND)
####  # include the CTest framework
####  include(CTest)
####
####  # add the directory with all of the tests
####  add_subdirectory(tests)
####endif()

################################################################################
# Configure doxygen
################################################################################
find_package(Doxygen)
if (DOXYGEN_FOUND)
  configure_file(${PREDICATES_SOURCE_DIR}/cmake/Doxyfile.in 
                 ${PREDICATES_BINARY_DIR}/Doxyfile @ONLY)
  add_custom_target(doc
                    COMMAND ${DOXYGEN_EXECUTABLE} ${PREDICATES_BINARY_DIR}/Doxyfile
                    SOURCES ${PREDICATES_BINARY_DIR}/Doxyfile
                    WORKING_DIRECTORY ${PREDICATES_BINARY_DIR}
                    COMMENT "Generating API documentation with Doxygen")
endif()
