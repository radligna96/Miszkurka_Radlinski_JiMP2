[![Build Status](https://travis-ci.org/radlinskii/Miszkurka_Radlinski_JiMP2.svg?branch=master)](https://travis-ci.org/radlinskii/Miszkurka_Radlinski_JiMP2)
[![Build status](https://ci.appveyor.com/api/projects/status/39thleljhjmtof0t?svg=true)](https://ci.appveyor.com/project/radlinskii/Miszkurka_Radlinski_JiMP2)


### C++ programming classes problems ###

#### CLion CMakeLists.txt template ####

In order to create new solution faster one can define template file 
in CLion based on [CMake template](scripts/Library_CMakeLists_Add_Template).
To add that template one has to right click in project menu choose
`New` from pop-up menu and and then `Edit File Templates...`. In new dialog
`File and Code Templates` click green plus and copy paste template. 

To use it just click again `New` and then it should show up in the list. 
The final step is to specify name which must be CMakeLists.txt and **space seperated**
name of the testing class name e.g. `reverse string`
