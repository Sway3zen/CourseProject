#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cjson" for configuration "RelWithDebInfo"
set_property(TARGET cjson APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(cjson PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Program Files (x86)/cJSON/lib/cjson.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Program Files (x86)/cJSON/bin/cjson.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS cjson )
list(APPEND _IMPORT_CHECK_FILES_FOR_cjson "C:/Program Files (x86)/cJSON/lib/cjson.lib" "C:/Program Files (x86)/cJSON/bin/cjson.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)