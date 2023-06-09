.PHONY: test check clean build dist all

ENV_ROOT_NAME?=main

ENV_CC_FILE=${ENV_ROOT_NAME}.c

ENV_VALGRIND_LOG_FILE=./valgrind_report.log

cleanValgrind:
	-@RM *.log
	-@RM -r ${ENV_ROOT_NAME}.dSYM/

cleanBuild:
	-@RM -r ${ENV_ROOT_NAME}

cleanAll: cleanValgrind cleanBuild
	$(info just clean all)

build: cleanBuild
	$(info => use -g to open gcc debug info)
	gcc -g -pthread -lpthread ${ENV_CC_FILE} -o ${ENV_ROOT_NAME}

checkByValgrind: build
	valgrind --tool=helgrind ./${ENV_ROOT_NAME}

checkByValgrindFast: build
	valgrind --tool=helgrind -s --history-level=approx ./${ENV_ROOT_NAME}

logByValgrind: build
	@valgrind --log-file=${ENV_VALGRIND_LOG_FILE} --tool=helgrind ./${ENV_ROOT_NAME}
	$(info => out log at: ${ENV_VALGRIND_LOG_FILE})