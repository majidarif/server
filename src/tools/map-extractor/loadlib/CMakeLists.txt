# This code is part of MaNGOS. Contributor & Copyright details are in AUTHORS/THANKS.
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

include(MacroMangosSourceGroup)

#-----------------------------------------------------------------------------
# Define the loadlib library
file(GLOB sources *.cpp)
file(GLOB headers *.h)

set(loadlib_LIB_SRCS ${sources} ${headers})

mangos_source_group(${loadlib_LIB_SRCS})

include_directories(
    ${ZLIB_INCLUDE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)

#-----------------------------------------------------------------------------
# Build the loadlib library
add_library(mangos-loadlib STATIC ${loadlib_LIB_SRCS})
target_link_libraries(mangos-loadlib ${ZLIB_LIBRARIES})

if(WIN32)
    # Disabled for now. GnuWin32-zlib does not need this
    # set(BUILD_PROPERTIES "-DZLIB_WINAPI" )
    # set_target_properties(mangos-loadlib PROPERTIES COMPILE_FLAGS ${BUILD_PROPERTIES})
endif()
