# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appuniversalVpnClient_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appuniversalVpnClient_autogen.dir/ParseCache.txt"
  "appuniversalVpnClient_autogen"
  )
endif()
