# This code is part of MaNGOS. Contributor & Copyright details are in AUTHORS/THANKS.
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

# uncomment next line to disable debug mode
# ADD_DEFINITIONS("-DIOMAP_DEBUG")

project (MANGOS_VMAP_EXTRACT_IO)


ADD_DEFINITIONS("-DUSE_LIBMPQ04")
ADD_DEFINITIONS("-Wall")
ADD_DEFINITIONS("-ggdb")
ADD_DEFINITIONS("-O3")

include_directories(
    ${CMAKE_SOURCE_DIR}/dep/StormLib/src
)
add_subdirectory(vmapextract)
