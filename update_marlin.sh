#!/bin/bash
git -C /home/james/Marlin_Custom fetch upstream
git -C /home/james/Marlin_Custom pull upstream bugfix-2.0.x 
#git -C /home/james/Marlin_Custom/ pull
#git -C /home/james/Marlin_Custom/ add /home/james/Marlin_Custom/firmware/james/*.bin
#git -C /home/james/Marlin_Custom/ commit -m "firmware scheduled build $(date +'%Y%m%d %H:%M:%S')"
#git -C /home/james/Marlin_Custom/ push 
