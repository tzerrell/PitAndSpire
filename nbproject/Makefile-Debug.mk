#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=x86_64-w64-mingw32-gcc
CCC=x86_64-w64-mingw32-g++
CXX=x86_64-w64-mingw32-g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/dungeon.o \
	${OBJECTDIR}/gang.o \
	${OBJECTDIR}/inventory.o \
	${OBJECTDIR}/item.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/monster.o \
	${OBJECTDIR}/room.o \
	${OBJECTDIR}/tile.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-I/usr/include/freetype2 -ggdb -O2 -pipe -fdebug-prefix-map=/usr/src/ports/fltk/fltk-1.3.3-1.x86_64/build=/usr/src/debug/fltk-1.3.3-1 -fdebug-prefix-map=/usr/src/ports/fltk/fltk-1.3.3-1.x86_64/src/fltk-1.3.3=/usr/src/debug/fltk-1.3.3-1 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT
CXXFLAGS=-I/usr/include/freetype2 -ggdb -O2 -pipe -fdebug-prefix-map=/usr/src/ports/fltk/fltk-1.3.3-1.x86_64/build=/usr/src/debug/fltk-1.3.3-1 -fdebug-prefix-map=/usr/src/ports/fltk/fltk-1.3.3-1.x86_64/src/fltk-1.3.3=/usr/src/debug/fltk-1.3.3-1 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/lib -lfltk

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	x86_64-w64-mingw32-g++ -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/dungeon.o: nbproject/Makefile-${CND_CONF}.mk dungeon.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dungeon.o dungeon.cpp

${OBJECTDIR}/gang.o: nbproject/Makefile-${CND_CONF}.mk gang.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gang.o gang.cpp

${OBJECTDIR}/inventory.o: nbproject/Makefile-${CND_CONF}.mk inventory.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/inventory.o inventory.cpp

${OBJECTDIR}/item.o: nbproject/Makefile-${CND_CONF}.mk item.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/item.o item.cpp

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/monster.o: nbproject/Makefile-${CND_CONF}.mk monster.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/monster.o monster.cpp

${OBJECTDIR}/room.o: nbproject/Makefile-${CND_CONF}.mk room.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/room.o room.cpp

${OBJECTDIR}/tile.o: nbproject/Makefile-${CND_CONF}.mk tile.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/cygdrive/C/cygwin64/usr/x86_64-w64-mingw32/sys-root/mingw/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tile.o tile.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
