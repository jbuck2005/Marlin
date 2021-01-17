#!/bin/bash
git -C /home/james/Marlin_Custom checkout john
git -C /home/james/Marlin_Custom pull
git -C /home/james/Marlin_Custom fetch upstream
#git -C /home/james/Marlin_Custom pull upstream bugfix-2.0.x -m "scheduled update $(date +'%Y%m%d %H:%M:%S')"
git -C /home/james/Marlin_Custom pull --no-edit upstream bugfix-2.0.x
git -C /home/james/Marlin_Custom push
git -C /home/james/Marlin_Custom checkout james
