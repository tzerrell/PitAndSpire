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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/ac8653fe/cardinal_dir.o \
	${OBJECTDIR}/_ext/ac8653fe/creature.o \
	${OBJECTDIR}/_ext/ac8653fe/party.o \
	${OBJECTDIR}/_ext/ac8653fe/playerCharacter.o \
	${OBJECTDIR}/_ext/ac8653fe/random.o \
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
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lerron ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/ac8653fe/cardinal_dir.o: /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/cardinal_dir.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/ac8653fe
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/ac8653fe/cardinal_dir.o /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/cardinal_dir.cpp

${OBJECTDIR}/_ext/ac8653fe/creature.o: /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/creature.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/ac8653fe
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/ac8653fe/creature.o /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/creature.cpp

${OBJECTDIR}/_ext/ac8653fe/party.o: /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/party.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/ac8653fe
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/ac8653fe/party.o /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/party.cpp

${OBJECTDIR}/_ext/ac8653fe/playerCharacter.o: /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/playerCharacter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/ac8653fe
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/ac8653fe/playerCharacter.o /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/playerCharacter.cpp

${OBJECTDIR}/_ext/ac8653fe/random.o: /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/random.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/ac8653fe
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/ac8653fe/random.o /cygdrive/C/Users/tnc02_000/Documents/NetBeansProjects/Lerron/random.cpp

${OBJECTDIR}/dungeon.o: dungeon.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dungeon.o dungeon.cpp

${OBJECTDIR}/gang.o: gang.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gang.o gang.cpp

${OBJECTDIR}/inventory.o: inventory.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/inventory.o inventory.cpp

${OBJECTDIR}/item.o: item.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/item.o item.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/monster.o: monster.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/monster.o monster.cpp

${OBJECTDIR}/room.o: room.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/room.o room.cpp

${OBJECTDIR}/tile.o: tile.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tile.o tile.cpp

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
