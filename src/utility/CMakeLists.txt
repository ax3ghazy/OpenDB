# Copyright (c) 2021, OpenRoad Project
# 
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

find_package(spdlog REQUIRED)
message(STATUS "spdlog: ${spdlog_VERSION}")

############################################################
# Create a library 
############################################################
add_library( utility
  STATIC
  src/Logger.cpp
  src/MakeLogger.cpp
)
  
target_include_directories( utility
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${TCL_INCLUDE_PATH}
)

target_link_libraries( utility
  PUBLIC
  spdlog::spdlog
)

install (
  TARGETS utility
  LIBRARY DESTINATION lib
)

set_property(TARGET utility PROPERTY POSITION_INDEPENDENT_CODE ON)
