cmd_/home/winpqa/src/mod_linkedlist/Module.symvers := sed 's/\.ko$$/\.o/' /home/winpqa/src/mod_linkedlist/modules.order | scripts/mod/modpost -m -a  -o /home/winpqa/src/mod_linkedlist/Module.symvers -e -i Module.symvers   -T -
