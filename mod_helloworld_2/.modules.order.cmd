cmd_/home/winpqa/src/lkm_example/modules.order := {   echo /home/winpqa/src/lkm_example/lkm_example.ko; :; } | awk '!x[$$0]++' - > /home/winpqa/src/lkm_example/modules.order
