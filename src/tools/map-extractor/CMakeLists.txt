# mangos-three is a full featured server for World of Warcraft in its cataclysm
# version, supporting clients for patch 4.3.4.
#
# Copyright (C) 2005-2013  MaNGOS project <http://getmangos.com>
#
# ***** BEGIN GPL LICENSE BLOCK *****
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#
# ***** END GPL LICENSE BLOCK *****
#
# World of Warcraft, and all World of Warcraft or Warcraft art, images,
# and lore are copyrighted by Blizzard Entertainment, Inc.

include(MacroMangosSourceGroup)

#-----------------------------------------------------------------------------
# Build the loadlib application
add_subdirectory(loadlib)

#-----------------------------------------------------------------------------
# Define the map-extractor application
file(GLOB sources *.cpp)
file(GLOB headers *.h)

set(map_extractor_LIB_SRCS ${sources} ${headers})

mangos_source_group(${map_extractor_LIB_SRCS})

include_directories(
	${ZLIB_INCLUDE_DIR}
	${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/loadlib/
	${CMAKE_SOURCE_DIR}/dep/StormLib/src/
)

#-----------------------------------------------------------------------------
# Build the map-extractor application
add_executable(map-extractor
	${map_extractor_LIB_SRCS}
)

add_dependencies(map-extractor storm)


target_link_libraries(map-extractor
	storm
	mangos-loadlib
	${ZLIB_LIBRARIES}
)


if( UNIX )
  install(TARGETS map-extractor DESTINATION "${BIN_DIR}")
elseif( WIN32 )
  install(TARGETS map-extractor DESTINATION "${CMAKE_INSTALL_PREFIX}")
endif()

