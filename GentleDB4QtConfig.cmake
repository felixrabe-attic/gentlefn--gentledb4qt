get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(GentleDB4Qt_INCLUDE_DIRS "${SELF_DIR}/../../../include/GentleDB4Qt" ABSOLUTE)
find_library(GentleDB4Qt_LIBRARIES GentleDB4Qt ../..)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GentleDB4Qt DEFAULT_MSG
  GentleDB4Qt_LIBRARIES
  GentleDB4Qt_INCLUDE_DIRS
)
