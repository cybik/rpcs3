find_package(Git)
if(GIT_FOUND)
    execute_process(COMMAND ${GIT_EXECUTABLE} rev-list HEAD --count
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE EXIT_CODE
            OUTPUT_VARIABLE GIT_VERSION)
    if(NOT ${EXIT_CODE} EQUAL 0)
        message(WARNING "git rev-list failed, unable to include version.")
    endif()
    execute_process(COMMAND ${GIT_EXECUTABLE} rev-parse --short HEAD
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE EXIT_CODE
            OUTPUT_VARIABLE GIT_VERSION_)
    if(NOT ${EXIT_CODE} EQUAL 0)
        message(WARNING "git rev-parse failed, unable to include version.")
    endif()
    string(STRIP ${GIT_VERSION} GIT_VERSION)
    string(STRIP ${GIT_VERSION_} GIT_VERSION_)
    string(STRIP ${GIT_VERSION}-${GIT_VERSION_} GIT_VERSION)
    message(STATUS "GIT_VERSION: " ${GIT_VERSION})
    set(EXTRACTED_GIT_VERSION ${GIT_VERSION})
else()
    message(WARNING "git not found, unable to include version.")
    set(EXTRACTED_GIT_VERSION 0000-0000000)
    message(WARNING "Setting GIT_VERSION to " ${EXTRACTED_GIT_VERSION})
endif()