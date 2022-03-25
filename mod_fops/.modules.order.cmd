cmd_/home/winpqa/src/mod_fops/modules.order := {   echo /home/winpqa/src/mod_fops/lkm_example.ko; :; } | awk '!x[$$0]++' - > /home/winpqa/src/mod_fops/modules.order
