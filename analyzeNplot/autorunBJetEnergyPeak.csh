#!/bin/tcsh


set inputFolder = $1
set SignalTypes = {"nominal","scaleup","scaledown","fsrup","fsrdown","isrup","isrdown"}
#set SignalTypes = {"TT","scaleup"}



foreach i ($SignalTypes)

	if ( $i == "nominal" ) then
		cp -r ${inputFolder}/TTJets/TTJets.root ${inputFolder}/
	else
		cp -r ${inputFolder}/TTJets/TTJets_${i}.root ${inputFolder}/

	endif

	python plotter.py -i nominal -j data/samples_Run2016_25ns.json -l 35867.


	if ( $i == "nominal" ) then
		mv ${inputFolder}/plots ${inputFolder}/plots_${i}
		rm -r ${inputFolder}/TTJets.root
	else
		mv ${inputFolder}/plots ${inputFolder}/plots_${i}
		rm -r ${inputFolder}/TTJets_${i}.root
	endif

end



##### ISR = initial state radiation 
##### FSR = final state radiation 
##### SCALE = Q Scale
