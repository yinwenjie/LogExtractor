#! /bin/bash

rm -rf output
mkdir output
cd output

cmake ..
make
../output/LogExtractor ../structural_analysis_service_2020-11-19.log StructuralEventToJsons ./output.log