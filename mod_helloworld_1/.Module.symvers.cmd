cmd_/home/winpqa/src/rkmod/Module.symvers := sed 's/\.ko$$/\.o/' /home/winpqa/src/rkmod/modules.order | scripts/mod/modpost -m -a  -o /home/winpqa/src/rkmod/Module.symvers -e -i Module.symvers   -T -
