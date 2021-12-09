set(SCHEMAS
    animal
    master
    plant
    )

foreach(SCHEMA ${SCHEMAS})
    execute_process(COMMAND ${FLATC} --cpp -o ${CMAKE_CURRENT_SOURCE_DIR} 
        --cpp-std c++17 ${CMAKE_CURRENT_SOURCE_DIR}/${SCHEMA}.fbs)
endforeach()
