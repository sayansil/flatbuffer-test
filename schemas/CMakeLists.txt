set(SCHEMAS
    animal
    master
    plant
    chitragupta
    )

foreach(SCHEMA ${SCHEMAS})
    execute_process(COMMAND ${FLATC} --cpp -o ${CMAKE_CURRENT_SOURCE_DIR}
        --gen-mutable --gen-object-api --cpp-std c++17 ${CMAKE_CURRENT_SOURCE_DIR}/${SCHEMA}.fbs)
endforeach()
