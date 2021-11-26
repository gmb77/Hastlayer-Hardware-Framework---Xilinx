# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct /home/halpa/Documents/Smith-Waterman/Hastlayer/Hastlayer-Hardware-Framework---Xilinx/SDK/Hastlayer_Platform/platform.tcl
# 
# OR launch xsct and run below command.
# source /home/halpa/Documents/Smith-Waterman/Hastlayer/Hastlayer-Hardware-Framework---Xilinx/SDK/Hastlayer_Platform/platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {Hastlayer_Platform}\
-hw {/home/halpa/Documents/Smith-Waterman/Hastlayer/sw_score_calc/system_wrapper.xsa}\
-fsbl-target {psu_cortexa53_0} -out {/home/halpa/Documents/Smith-Waterman/Hastlayer/Hastlayer-Hardware-Framework---Xilinx/SDK}

platform write
domain create -name {standalone_ps7_cortexa9_0} -display-name {standalone_ps7_cortexa9_0} -os {standalone} -proc {ps7_cortexa9_0} -runtime {cpp} -arch {32-bit} -support-app {empty_application}
platform generate -domains 
platform active {Hastlayer_Platform}
domain active {zynq_fsbl}
domain active {standalone_ps7_cortexa9_0}
platform generate -quick
platform generate
