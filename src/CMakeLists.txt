# Sources

set(GentleDB4Qt_srcs GentleDB4Qt.cpp)


# Build

# qt4_wrap_cpp(GentleDB4Qt_srcs ${GentleDB4Qt_moc_headers})
# include_directories(${CMAKE_BINARY_DIR})

add_library(GentleDB4Qt ${GentleDB4Qt_srcs})
target_link_libraries(GentleDB4Qt ${QT_QTCORE_LIBRARY} ${OPENSSL_LIBRARY})
set_target_properties(GentleDB4Qt PROPERTIES
    VERSION ${GentleDB4Qt_major_version}.${GentleDB4Qt_minor_version}.${GentleDB4Qt_patch_version}
    SOVERSION ${GentleDB4Qt_major_version}
    DEFINE_SYMBOL GENTLEDB4QT_LIBRARY
)


# Installation

install(TARGETS GentleDB4Qt DESTINATION lib)
