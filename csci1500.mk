##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=csci1500
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Troy/development/csci1500_/csci1500
ProjectPath            :=C:/Users/Troy/development/csci1500_/csci1500
IntermediateDirectory  :=./build-$(ConfigurationName)/
OutDir                 :=./build-$(ConfigurationName)/
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Troy
Date                   :=23/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=.\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=./build-$(ConfigurationName)//absolutecpp_main.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//assignment01_assign0.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ./build-$(ConfigurationName)//.d $(Objects) 
	@if not exist ".\build-$(ConfigurationName)\" mkdir ".\build-$(ConfigurationName)\"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist ".\build-$(ConfigurationName)\" mkdir ".\build-$(ConfigurationName)\"
	@if not exist "".\build-$(ConfigurationName)\bin"" mkdir "".\build-$(ConfigurationName)\bin""

./build-$(ConfigurationName)//.d:
	@if not exist ".\build-$(ConfigurationName)\" mkdir ".\build-$(ConfigurationName)\"

PreBuild:


##
## Objects
##
./build-$(ConfigurationName)//absolutecpp_main.cpp$(ObjectSuffix): absolutecpp/main.cpp ./build-$(ConfigurationName)//absolutecpp_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/absolutecpp/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/absolutecpp_main.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//absolutecpp_main.cpp$(DependSuffix): absolutecpp/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//absolutecpp_main.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//absolutecpp_main.cpp$(DependSuffix) -MM absolutecpp/main.cpp

./build-$(ConfigurationName)//absolutecpp_main.cpp$(PreprocessSuffix): absolutecpp/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//absolutecpp_main.cpp$(PreprocessSuffix) absolutecpp/main.cpp

./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(ObjectSuffix): ChapterOneCay/helloWorld.cpp ./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/ChapterOneCay/helloWorld.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ChapterOneCay_helloWorld.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(DependSuffix): ChapterOneCay/helloWorld.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(DependSuffix) -MM ChapterOneCay/helloWorld.cpp

./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(PreprocessSuffix): ChapterOneCay/helloWorld.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//ChapterOneCay_helloWorld.cpp$(PreprocessSuffix) ChapterOneCay/helloWorld.cpp

./build-$(ConfigurationName)//assignment01_assign0.cpp$(ObjectSuffix): assignment01/assign0.cpp ./build-$(ConfigurationName)//assignment01_assign0.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/assignment01/assign0.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/assignment01_assign0.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//assignment01_assign0.cpp$(DependSuffix): assignment01/assign0.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//assignment01_assign0.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//assignment01_assign0.cpp$(DependSuffix) -MM assignment01/assign0.cpp

./build-$(ConfigurationName)//assignment01_assign0.cpp$(PreprocessSuffix): assignment01/assign0.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//assignment01_assign0.cpp$(PreprocessSuffix) assignment01/assign0.cpp

./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(ObjectSuffix): ChapterOneCay/helloworld.c ./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/ChapterOneCay/helloworld.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ChapterOneCay_helloworld.c$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(DependSuffix): ChapterOneCay/helloworld.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(ObjectSuffix) -MF./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(DependSuffix) -MM ChapterOneCay/helloworld.c

./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(PreprocessSuffix): ChapterOneCay/helloworld.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//ChapterOneCay_helloworld.c$(PreprocessSuffix) ChapterOneCay/helloworld.c


-include ./build-$(ConfigurationName)///*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


