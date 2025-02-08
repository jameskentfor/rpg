cmake_minimum_required(VERSION 3.31.4)

project(RPG)

file(GLOB SRC_FILES
	"*.cpp"
)

set(INC_FILES_DIR
	../include
)

set(SOURCE_FILES
	SRC_FILES
)


add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(
	${PROJECT_NAME} 
	PRIVATE 
	${INC_FILES_DIR}
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
