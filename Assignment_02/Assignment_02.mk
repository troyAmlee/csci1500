##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment_02
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Troy/development/csci1500_/csci1500/Assignment_02
ProjectPath            :=C:/Users/Troy/development/csci1500_/csci1500/Assignment_02
IntermediateDirectory  :=./build-$(ConfigurationName)/
OutDir                 :=./build-$(ConfigurationName)/
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Troy
Date                   :=28/09/2019
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
Objects0=./build-$(ConfigurationName)//score_group4_question3.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//grade_group4_question2.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//temp_group4_question1.cpp$(ObjectSuffix) ./build-$(ConfigurationName)//shirts_group4_question4.cpp$(ObjectSuffix) 



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
./build-$(ConfigurationName)//score_group4_question3.cpp$(ObjectSuffix): score_group4_question3.cpp ./build-$(ConfigurationName)//score_group4_question3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/Assignment_02/score_group4_question3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/score_group4_question3.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//score_group4_question3.cpp$(DependSuffix): score_group4_question3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//score_group4_question3.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//score_group4_question3.cpp$(DependSuffix) -MM score_group4_question3.cpp

./build-$(ConfigurationName)//score_group4_question3.cpp$(PreprocessSuffix): score_group4_question3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//score_group4_question3.cpp$(PreprocessSuffix) score_group4_question3.cpp

./build-$(ConfigurationName)//grade_group4_question2.cpp$(ObjectSuffix): grade_group4_question2.cpp ./build-$(ConfigurationName)//grade_group4_question2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/Assignment_02/grade_group4_question2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/grade_group4_question2.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//grade_group4_question2.cpp$(DependSuffix): grade_group4_question2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//grade_group4_question2.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//grade_group4_question2.cpp$(DependSuffix) -MM grade_group4_question2.cpp

./build-$(ConfigurationName)//grade_group4_question2.cpp$(PreprocessSuffix): grade_group4_question2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//grade_group4_question2.cpp$(PreprocessSuffix) grade_group4_question2.cpp

./build-$(ConfigurationName)//temp_group4_question1.cpp$(ObjectSuffix): temp_group4_question1.cpp ./build-$(ConfigurationName)//temp_group4_question1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/Assignment_02/temp_group4_question1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/temp_group4_question1.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//temp_group4_question1.cpp$(DependSuffix): temp_group4_question1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//temp_group4_question1.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//temp_group4_question1.cpp$(DependSuffix) -MM temp_group4_question1.cpp

./build-$(ConfigurationName)//temp_group4_question1.cpp$(PreprocessSuffix): temp_group4_question1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//temp_group4_question1.cpp$(PreprocessSuffix) temp_group4_question1.cpp

./build-$(ConfigurationName)//shirts_group4_question4.cpp$(ObjectSuffix): shirts_group4_question4.cpp ./build-$(ConfigurationName)//shirts_group4_question4.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Troy/development/csci1500_/csci1500/Assignment_02/shirts_group4_question4.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/shirts_group4_question4.cpp$(ObjectSuffix) $(IncludePath)
./build-$(ConfigurationName)//shirts_group4_question4.cpp$(DependSuffix): shirts_group4_question4.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT./build-$(ConfigurationName)//shirts_group4_question4.cpp$(ObjectSuffix) -MF./build-$(ConfigurationName)//shirts_group4_question4.cpp$(DependSuffix) -MM shirts_group4_question4.cpp

./build-$(ConfigurationName)//shirts_group4_question4.cpp$(PreprocessSuffix): shirts_group4_question4.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ./build-$(ConfigurationName)//shirts_group4_question4.cpp$(PreprocessSuffix) shirts_group4_question4.cpp


-include ./build-$(ConfigurationName)///*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


