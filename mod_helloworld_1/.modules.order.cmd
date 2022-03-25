cmd_/home/winpqa/src/rkmod/modules.order := {   echo /home/winpqa/src/rkmod/hello.ko; :; } | awk '!x[$$0]++' - > /home/winpqa/src/rkmod/modules.order
