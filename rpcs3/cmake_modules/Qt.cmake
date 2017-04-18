# Instruct CMake to run moc automatically when needed.

# This isn't platform independent. But, it is the default install directory.
# CHANGE THIS IF YOU USED DIFFERENT LOCATION OR COMPILER
if (WIN32)
    set (QTDIR "C:/Qt/5.8/msvc2015_64")
else()
    set (QTDIR "/usr/lib/qt5")
endif()

# Early detect if QT doesn't exist for meaningful error message.
if (NOT EXISTS ${QTDIR})
    message ( "Qt should be located at ${QTDIR}")
    message ( FATAL_ERROR "Qt is not probably configured.  Please download Qt ( https://www.qt.io/download-open-source/ ) and/or edit this file to the proper directory.")
endif()

# Inform CMAKE where Qt is.
set (CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QTDIR})

# Windows needs to have the dlls path in environment for visual studio.
# So, do so here. Should this be WIN32 or MSVC?
if (MSVC)
    set(CMAKE_MSVCIDE_RUN_PATH "${QTDIR}/bin/")
endif ()

# Qt should set this to be true but I have no idea why it doesn't. For now, just force it to be defined because it should be.
add_definitions(-DQT_UI)

message("cpp standard " ${CMAKE_CXX_STANDARD})